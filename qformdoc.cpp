#include "qformdoc.h"
#include "ui_qformdoc.h"

#include    <QToolBar>
#include    <QVBoxLayout>
#include    <QFileDialog>
#include    <QFile>
#include    <QTextStream>
#include    <QFontDialog>
#include    <QFileInfo>
#include    <QMessageBox>

#include    <qwmainwindow.h>

//using namespace std;

QFormDoc::QFormDoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QFormDoc)
{
    ui->setupUi(this);

    // 使用UI设计的Actions设计工具栏
    QToolBar* locToolBar = new QToolBar(tr("文档"),this); //创建工具栏
    locToolBar->addAction(ui->actOpen);
    locToolBar->addAction(ui->actFont);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actCut);
    locToolBar->addAction(ui->actCopy);
    locToolBar->addAction(ui->actPaste);
    locToolBar->addAction(ui->actUndo);
    locToolBar->addAction(ui->actRedo);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actClose);

    locToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    // locToolBar->setAutoFillBackground(true);

    QVBoxLayout *Layout = new QVBoxLayout();
    Layout->addWidget(locToolBar); //设置工具栏和编辑器上下布局
    Layout->addWidget(ui->plainTextEdit);
    Layout->setContentsMargins(2,2,2,2); //减小边框的宽度
    Layout->setSpacing(2);
    this->setLayout(Layout); //设置布局
    // this->setAutoFillBackground(true); //避免工具栏显示背景图片
    this->setAttribute(Qt::WA_DeleteOnClose);

    isFormSaved = false;
    isUntitled = false;
}

QFormDoc::QFormDoc(QWidget *parent, const QString pFileName):
    QWidget(parent),
    ui(new Ui::QFormDoc)
{
    ui->setupUi(this);

    // 使用UI设计的Actions设计工具栏
    QToolBar* locToolBar = new QToolBar(tr("文档"),this); //创建工具栏
    locToolBar->addAction(ui->actOpen);
    locToolBar->addAction(ui->actFont);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actCut);
    locToolBar->addAction(ui->actCopy);
    locToolBar->addAction(ui->actPaste);
    locToolBar->addAction(ui->actUndo);
    locToolBar->addAction(ui->actRedo);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actClose);

    locToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    // locToolBar->setAutoFillBackground(true);

    QVBoxLayout *Layout = new QVBoxLayout();
    Layout->addWidget(locToolBar); //设置工具栏和编辑器上下布局
    Layout->addWidget(ui->plainTextEdit);
    Layout->setContentsMargins(2,2,2,2); //减小边框的宽度
    Layout->setSpacing(2);
    this->setLayout(Layout); //设置布局
    // this->setAutoFillBackground(true); //避免工具栏显示背景图片

    this->setAttribute(Qt::WA_DeleteOnClose);

    loadFromFile(pFileName);
}



QFormDoc::~QFormDoc()
{
    // QMessageBox::information(this, "消息", "QFormDoc对象被删除和释放");
    delete ui;
}

void QFormDoc::loadFromFile(const QString &aFileName)
{
    QString str;
    QFile aFile(aFileName);  //以文件方式读出
    if (aFile.open(QIODevice::ReadOnly | QIODevice::Text)) //以只读文本方式打开文件
    {
        QTextStream aStream(&aFile); //用文本流读取文件
        ui->plainTextEdit->clear();//清空
        while (!aStream.atEnd())
        {
            str=aStream.readLine();//读取文件的一行
            ui->plainTextEdit->appendPlainText(str); //添加到文本框显示
        }
        aFile.close();//关闭文件

        mCurrentFile=aFileName;
        QFileInfo   fileInfo(aFileName);
        QString shorName=fileInfo.fileName();
        QFont *qFont = new QFont("微软雅黑");
        ui->plainTextEdit->setFont(*qFont);
        this->setWindowTitle(shorName);
    }
}

void QFormDoc::on_actOpen_triggered()
{
    // curPath=QCoreApplication::applicationDirPath(); //获取应用程序的路径
    QString curPath=QDir::currentPath();
    //调用打开文件对话框打开一个文件
    QString aFileName=QFileDialog::getOpenFileName(this,tr("打开一个文件"),curPath,
                 "C程序文件文件(*.h *cpp);;文本文件(*.txt);;所有文件(*.*)");

    if (aFileName.isEmpty())
        return; //如果未选择文件，退出

    loadFromFile(aFileName);
}

void QFormDoc::on_actFont_triggered()
{
    QFont   font;
    font=ui->plainTextEdit->font();

    bool    ok;
    font=QFontDialog::getFont(&ok,font);
    ui->plainTextEdit->setFont(font);

}

// add by yg@20191024
bool QFormDoc::isFormWindowSaved()
{
    // 当前文档已经被修改
    if(ui->plainTextEdit->document()->isModified() && !isFormSaved)
    {
        QMessageBox box(this);
        box.setWindowTitle(tr("Warning"));
        box.setIcon(QMessageBox::Warning);
        box.setText(tr("Save the changes to\r") + mCurrentFile + "?");
        QPushButton *yesBtn = box.addButton(tr("Yes"), QMessageBox::YesRole);
        QPushButton *noBtn = box.addButton(tr("No"), QMessageBox::NoRole);
        QPushButton *cancelBtn = box.addButton(tr("Cancle"), QMessageBox::RejectRole);
        box.exec();
        QPushButton* clickedButton = (QPushButton*)box.clickedButton();
        if(clickedButton == yesBtn)
            //return save();
            return false;
        else if(clickedButton == noBtn)
            return true;
        else if(clickedButton == cancelBtn)
            return false;
    }
    // 若文档未被修改
    return true;
}

// add by yg@20191024
bool QFormDoc::saveFormWindow(const QString &fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QFile::Text)){
        ;
    }
    QTextStream out(&file);
    // 鼠标指针变为等待状态
    QApplication::setOverrideCursor(Qt::WaitCursor);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
    // 鼠标指针恢复为原来的状态
    QApplication::restoreOverrideCursor();
    isFormSaved = true;
    return true;
}

// add by yg@20191025
void    QFormDoc::setCurDirPath(const QDir & pdir)
{
    this->mCurDirPath = pdir;
}

// add by yg@20191025
void    QFormDoc::setCurFile(const QString & pFileName)
{
    this->mCurrentFile = pFileName;
}

QString    QFormDoc::getCurFile()const
{
    return this->mCurrentFile;
    //std::cout << "hello world" << std::endl;
}

QDir    QFormDoc::getCurDirPath()const
{
    return this->mCurDirPath;
}









