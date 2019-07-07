#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    model=new QFileSystemModel(this); //QFileSystemModel提供单独线程，推荐使用
    model->setRootPath(QDir::currentPath()); //设置根目录

    ui->treeView->setModel(model); //设置数据模型
    ui->treeView->setRootIndex(model->index("D:\\test223\\ouhengli"));

//信号与槽关联，treeView单击时，其目录设置为listView和tableView的根节点
//    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),
//            ui->listView,SLOT(setRootIndex(QModelIndex)));

//    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),
//            ui->tableView,SLOT(setRootIndex(QModelIndex)));
}


MainWindow::~MainWindow()
{
    delete ui;
}


bool MainWindow::openTextByIODevice(const QString &aFileName) {
    // 用 IODevice 方式打开文本文件
    QFile aFile(aFileName);

    if (!aFile.exists()) // 文件不存在
        return false;

    if (!aFile.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    ui->textEdit->setPlainText(aFile.readAll());
    aFile.close();
    return true;
}

void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    ui->chkIsDir->setChecked(model->isDir(index));
    ui->LabPath->setText(model->filePath(index));
    ui->LabType->setText(model->type(index));

    ui->LabFileName->setText(model->fileName(index));

    int sz=model->size(index)/1024;
    if (sz<1024)
        ui->LabFileSize->setText(QString("%1 KB").arg(sz));
    else
        ui->LabFileSize->setText(QString::asprintf("%.1f MB",sz/1024.0));

    QString aFileName = model->filePath(index);
    if (aFileName.isEmpty())
        return;

    openTextByIODevice(aFileName);
}


bool MainWindow::saveFile(const QString &fileName){
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("Notepad"),
                             tr("Cant't write file %1：/n %2").arg(fileName).arg(file.errorString()));
        return false;
    }
    QTextStream out(&file);
    // 鼠标状态变为等待状态
    QApplication::setOverrideCursor(Qt::WaitCursor);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
    // 鼠标指针恢复原来的状态
    QApplication::restoreOverrideCursor();
    isUntitiled =  false;
    // 获取文件的标准路径
    CurrentFile = QFileInfo(fileName).canonicalFilePath();
    // 设置窗口标题
    setWindowTitle(CurrentFile);
    hasSaved = true;
    return true;
}



// 保存文件
bool MainWindow::save(){
    if(isUntitiled){
        return saveFileAs();
    }
    else{
        return saveFile(CurrentFile);
    }
}

// 文件另存为
bool MainWindow::saveFileAs(){
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save as"), CurrentFile,
                                                    tr("Document(*.txt"));
    if(fileName.isEmpty()){
        return false;
    }
    else{
        return saveFile(fileName);
    }
}


// 在执行 action 之前检测当前文档是否已经保存
bool MainWindow::saveBeforeAction(){
    // 当前文档被更改
    if(ui->textEdit->document()->isModified() && !hasSaved){
        QMessageBox box(this);
        box.setWindowTitle(tr("Warning"));
        box.setIcon(QMessageBox::Warning);
        box.setText(tr("Save the changes to\r") + CurrentFile + "?");
        QPushButton *yesBtn = box.addButton(tr("Yes"), QMessageBox::YesRole);
        QPushButton *noBtn = box.addButton(tr("No"), QMessageBox::NoRole);
        QPushButton *cancelBtn = box.addButton(tr("Cancel"), QMessageBox::RejectRole);
        box.exec();
        QPushButton *clickedButton = (QPushButton *)box.clickedButton();
        if(clickedButton == yesBtn)
            return save();
        else if(clickedButton == noBtn)
            return true;
        else if(clickedButton == cancelBtn)
            return false;
    }
    // 如果文档没有被更改，则直接返回 true
    return true;
}


void MainWindow::closeEvent(QCloseEvent *event){
    // updateSettings(); 函数未实现

    if(saveBeforeAction()){
        event->accept();
    }
    else{
        event->ignore();
    }
}

// load file
bool MainWindow::loadFile(const QString &fileName){
    QFile file(fileName); // new QFile Object
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, tr("Notepad"),
            tr("Can't read file %1:\n%2.").arg(fileName).arg(file.errorString()));
        return false; //只读方式打开，出错则提示并返回false
    }
    QTextStream in(&file);
    // 设置鼠标状态
    QApplication::setOverrideCursor(Qt::WaitCursor);
    // 读取文件的全部文本内容，并添加到编辑器中
    ui->textEdit->setPlainText(in.readAll());
    // 恢复鼠标状态
    QApplication::restoreOverrideCursor();
    // 设置当前文件
    CurrentFile = QFileInfo(fileName).canonicalFilePath();
    // 设置窗口标题
    setWindowTitle(CurrentFile);
    file.close();
    isUntitiled = false;
    return true;
}





// save
void MainWindow::on_actionSave_triggered()
{
   save();
}

// save file as ..
void MainWindow::on_actionSave_as_triggered()
{
    saveFileAs();
}

// 打开
void MainWindow::on_actionOpen_triggered()
{
    if(saveBeforeAction()){
        QString fileName = QFileDialog::getOpenFileName(this,
            tr("Open the file"), tr(""), tr("Document(*.txt"));
        if(!fileName.isEmpty()){
            loadFile(fileName);
        }
    }

}

// slot: 新建
void MainWindow::on_actionNew_triggered()
{
    if(saveBeforeAction()){
        CurrentFile = "Untitled.txt";
        setWindowTitle(CurrentFile);
        ui->textEdit->setPlainText("");
    }
}

void MainWindow::on_actionExit_triggered()
{
    ;
}
