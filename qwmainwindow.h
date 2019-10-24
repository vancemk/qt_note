#ifndef QWMAINWINDOW_H
#define QWMAINWINDOW_H

/*
#include <QMainWindow>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPainter>
#include <QFileDialog>
#include "qwmisc.h"
#include <QWidget>
#include <QMainWindow>
#include <QFileInfo>
#include <QDir>
#include <QFileInfoList>
#include <iostream>
#include <string>
*/
#include "publicheads.h"
#include "dirfileop.h"
#include    "qformdoc.h"
#include "note_global.h"
// #include "note_extern.h"
// #include    "qformtable.h"



namespace Ui {
class QWMainWindow;
}

class QWMainWindow : public QMainWindow
{
    Q_OBJECT
private:
//    QFormTable  *formTable=NULL; //
    void    paintEvent(QPaintEvent *event);

public:
    const char *WORKDIR = "D:\\test223\\ouhengli\\";

    //QFormDoc *formDoc = new QFormDoc(this); //不指定父窗口，单独用show()方法显示
    // formDoc->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    explicit QWMainWindow(QWidget *parent = 0);
    ~QWMainWindow();

//    void    setCurrentTabText(const QString &text);
    void updateComboBox();
    void renameCurTab(const QString& pFileName);

private slots:
    void on_tabWidget_tabCloseRequested(int index);

//    void on_actDoc_Open_triggered();

//    void on_actWidgetWindow_triggered();

    void on_actWidgetInsite_triggered();

    // void on_actWindowInsite_triggered();

    // void on_actWindow_triggered();

    // void on_actWidget_triggered();

    void on_tabWidget_currentChanged(int index);

    void on_comboBox_currentIndexChanged(int index);

    void on_actionNewNoteBook_triggered();

    void on_tabWidget_tabBarClicked(int index);

    void on_QWMainWindow_customContextMenuRequested(const QPoint &pos);

    //void on_actWindowInsite_triggered();

    void on_action_N_Ctrl_N_triggered();

private:
    Ui::QWMainWindow *ui;
};

#endif // QWMAINWINDOW_H
