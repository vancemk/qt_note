#include "qwmainwindow.h"
#include "ui_qwmainwindow.h"

#include    <QPainter>
#include    <QFileDialog>
#include    "qwmisc.h"
#include <QWidget>
#include <QMainWindow>

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

    ui->tabWidget->setVisible(false);
    ui->tabWidget->clear();//清除所有页面
    ui->tabWidget->tabsClosable(); //Page有关闭按钮，可被关闭
    ui->tabWidget->setAutoFillBackground(true);

    ui->comboBox->setVisible(true);
    ui->comboBox->show();
    ui->comboBox->insertItem(1, "file1");
    ui->comboBox->insertItem(2, "file2");
    ui->comboBox->insertItem(3, "file3");
    ui->comboBox->setGeometry(QRect(4,5, 180, 25));
    // ui->comboBox->raise();


    ui->groupBox->setTitle("");
//    ui->splitter->addWidget(ui->groupBox);
//    ui->splitter->addWidget(ui->tabWidget);
//    ui->splitter->setStretchFactor(0, 1);
//    ui->splitter->setStretchFactor(1, 1);

    this->setCentralWidget(ui->splitter);
    this->setContentsMargins(0, 0, 0, 0);






    this->setWindowState(Qt::WindowMaximized); //窗口最大化显示
    this->setAutoFillBackground(true);




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
    QFormDoc *formDoc = new QFormDoc(this); //不指定父窗口，单独用show()方法显示
    formDoc->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    int cur;
    if (0 == ui->tabWidget->count()) {
        cur=ui->tabWidget->addTab(formDoc,
            QString::asprintf("        Doc %d",ui->tabWidget->count()));
    }
    else {
        cur=ui->tabWidget->addTab(formDoc,
            QString::asprintf("Doc %d",ui->tabWidget->count()));
    }

    ui->tabWidget->setCurrentIndex(cur);
    ui->tabWidget->setVisible(true);

    QRect *twRect = new QRect(ui->tabWidget->geometry());
    printf("x = %d, y = %d, w = %d, h = %d\n",
           twRect->x(),
           twRect->y(),
           twRect->width(),
           twRect->height());
}

void QWMainWindow::on_tabWidget_currentChanged(int index)
{
    bool  en=ui->tabWidget->count()>0; //再无页面时，actions禁用
    ui->tabWidget->setVisible(en);
}
