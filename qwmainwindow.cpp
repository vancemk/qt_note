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

    updateComboBox();

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

void QWMainWindow::updateComboBox(){
    ui->comboBox->clear();
    ui->comboBox->setVisible(true);
    ui->comboBox->show();
    // ui->comboBox->setEditable(true);

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
    if(text.trimmed() == ""){
        return;
    }
    cout << text.toStdString().data() << endl;

    if (!createFolder(WORKDIR1+text)){
        return;
    }
    updateComboBox();
}

void QWMainWindow::renameCurTab(const QString& pFileName){
    int index = ui->tabWidget->currentIndex();
    cout <<  "current index is: " << index << endl;
}



void QWMainWindow::on_tabWidget_tabBarClicked(int index)
{
    // index = ui->tabWidget->currentIndex();

    cout <<  "current index is: " << index << endl;
}

void QWMainWindow::on_QWMainWindow_customContextMenuRequested(const QPoint &pos)
{
    //创建菜单对象
    QMenu *pMenu = new QMenu(this);

    QAction *pNewTask = new QAction(tr("新建任务"), this);
    QAction *pEditTask = new QAction(tr("设置任务"), this);
    QAction *pDeleteTask = new QAction(tr("删除任务"), this);

    QAction *pToolRenName = new QAction(tr("改名工具"), this);
    QAction *pToolEdot = new QAction(tr("设置工具"), this);
    QAction *pToolDelete = new QAction(tr("删除工具"), this);

    //1:新建任务 2:设置任务 3:删除任务 4:改名工具 5:设置工具 6:删除工具
    pNewTask->setData(1);
    pEditTask->setData(2);
    pDeleteTask ->setData(3);
    pToolRenName->setData(4);
    pToolEdot->setData(5);
    pToolDelete ->setData(6);

    //把QAction对象添加到菜单上
    pMenu->addAction(pNewTask);
    pMenu->addAction(pEditTask);
    pMenu->addAction(pDeleteTask);
    pMenu->addAction(pToolRenName);
    pMenu->addAction(pToolEdot);
    pMenu->addAction(pToolDelete);

    //连接鼠标右键点击信号
    connect(pNewTask, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pEditTask, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pDeleteTask, SIGNAL(triggered()), SLOT(onTaskBoxContextMenuEvent()));
    connect(pToolRenName, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pToolEdot, SIGNAL(triggered()), this, SLOT(onTaskBoxContextMenuEvent()));
    connect(pToolDelete, SIGNAL(triggered()), SLOT(onTaskBoxContextMenuEvent()));

    //在鼠标右键点击的地方显示菜单
    pMenu->exec(cursor().pos());

    //释放内存
    QList<QAction*> list = pMenu->actions();
    foreach (QAction* pAction, list) delete pAction;
    delete pMenu;
}

// add by yg@20191024
void QWMainWindow::on_action_N_Ctrl_N_triggered()
{
    //创建QFormDoc窗体，并在tabWidget中显示
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
