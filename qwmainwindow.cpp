#include "qwmainwindow.h"
#include "ui_qwmainwindow.h"

#define log_msg(fmt, log_arg...)  \
        printf("[%s:%d][%s]: " fmt "\n", __FILE__, __LINE__, __FUNCTION__, ##log_arg)


// #pragma execution_character_set("utf-8")
using namespace std;

void QWMainWindow::paintEvent(QPaintEvent *event)
{ //绘制窗口背景图片
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(0,ui->mainToolBar->height(),this->width(),
                       this->height()-ui->mainToolBar->height()-ui->statusBar->height(),
                       QPixmap(":/images/images/back2.jpg"));
}

QWMainWindow::QWMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QWMainWindow)
{
    ui->setupUi(this);
    //QWidget *centralWidget = new QWidget;

    //memcpy(WORKDIR1,"D:\\test223\\ouhengli\\", strlen("D:\\test223\\ouhengli\\")+1);

    ui->tabWidget->setVisible(false);
    ui->tabWidget->clear();//清除所有页面
    ui->tabWidget->tabsClosable(); //Page有关闭按钮，可被关闭
    ui->tabWidget->setAutoFillBackground(true);
    // QAction *qAction = new QAction("Add");
//    ui->tabWidget->addAction(qAction);
//    ui->tabWidget->setVisible(true);

    ui->comboBox->setVisible(true);
    ui->comboBox->show();
    // ui->comboBox->setEditable(true);
    //ui->comboBox->set

    QFileInfoList qDirList;
    getDirListOnly(QString(WORKDIR), qDirList);
    QFileInfo fileInfo;

    for (int i=0; i<qDirList.size(); ++i){
        fileInfo = qDirList.at(i);
        std::cout<< qPrintable(QString(fileInfo.fileName()))
                 << endl;
        ui->comboBox->insertItem(i, fileInfo.fileName());
    }


    ui->comboBox->setGeometry(QRect(4,5, 180, 25));

    ui->groupBox->setTitle("");

    this->setCentralWidget(ui->splitter);
    this->setContentsMargins(0, 0, 0, 0);

    this->setWindowState(Qt::WindowMaximized); //窗口最大化显示
    this->setAutoFillBackground(true);

    //formDoc->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
}

QWMainWindow::~QWMainWindow()
{
    delete ui;
}



void QWMainWindow::on_tabWidget_tabCloseRequested(int index)
{//关闭Tab
    if (index<0)
        return;

    QWidget* aForm=ui->tabWidget->widget(index);
    aForm->close();
//    ui->tabWidget->removeTab(index);
}


void QWMainWindow::on_actWidgetInsite_triggered()
{ //创建QFormDoc窗体，并在tabWidget中显示

    int cur;
    if (0 == ui->tabWidget->count()) {
        cur=ui->tabWidget->addTab(new QFormDoc(this),
            QString::asprintf("New Tab %d",ui->tabWidget->count()+1));
    }
    else {
        cur=ui->tabWidget->addTab((new QFormDoc(this)),
            QString::asprintf("New Tab %d",ui->tabWidget->count()+1));
    }

    ui->tabWidget->setCurrentIndex(cur);
    ui->tabWidget->setVisible(true);

}

void QWMainWindow::on_tabWidget_currentChanged(int index)
{
    bool  en=ui->tabWidget->count()>0; //再无页面时，actions禁用
    ui->tabWidget->setVisible(en);
}

void QWMainWindow::on_comboBox_currentIndexChanged(int index)
{
    ui->comboBox->setCurrentIndex(index);
    // ui->comboBox->currentText();
    QDir secondDirPath = QDir(QString("%1%2").arg
                              (QString(WORKDIR)).arg
                              (ui->comboBox->currentText()));
    QFileInfoList qFileList;
    getFileListOnly(secondDirPath.absolutePath(), qFileList);
    cout << qPrintable(secondDirPath.absolutePath()) << endl;
    QFileInfo f;
    for (int i=0; i<qFileList.size(); ++i) {
        f = qFileList.at(i);
        //cout << qPrintable(f.absoluteFilePath()) << endl;
    }

    if (0 < ui->tabWidget->count()){
        for(int i=ui->tabWidget->count(); i>=0; i--){
            ui->tabWidget->removeTab(i);
            log_msg("remove tab, index = %d", i);
        }
    }
    printf("\n");



    if (qFileList.empty()){
        return;
    }

    if (0 == ui->tabWidget->count()) {
        int cur;
        for(int i=0; i<qFileList.size(); i++){
            cur = ui->tabWidget->addTab((new QFormDoc(this, qFileList[i].absoluteFilePath())),
                                         qFileList[i].fileName());
            ui->tabWidget->setCurrentIndex(cur);
            ui->tabWidget->setVisible(true);
        }
    }
}



void QWMainWindow::on_actionNewNoteBook_triggered()
{ //输入字符串
    QString dlgTitle="输入文字对话框";
    QString txtLabel="请输入文件名";
    QString defaultInput="";
    QLineEdit::EchoMode echoMode=QLineEdit::Normal;//正常文字输入
    // QLineEdit::EchoMode echoMode=QLineEdit::Password;//密码输入

    bool ok=false;
    QString text = QInputDialog::getText(this, dlgTitle,txtLabel, echoMode,defaultInput, &ok);
    cout << text.toStdString().data() << endl;
}




