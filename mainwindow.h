#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QFontDialog>
#include <QCloseEvent>
#include <QLineEdit>
#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QDesktopServices>
#include <QTextCursor>
#include <QDebug>
#include <QTextEdit>
#include <QPainter>
#include <QPlainTextEdit>
#include <QClipboard>
#include <QSettings>
// #include <QPrinter>
// #include <QPrintDialog>
// #include <QNetworkAccessManager>
// #include <QNetworkReply>
#include <QProcess>
#include <QTimer>
#include <QDesktopWidget>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QFileSystemModel    *model; //定义数据模型变量

    bool    openTextByIODevice(const QString &aFileName);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

    void on_actionNew_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionOpen_triggered();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    QString CurrentFile;
    bool    isUntitiled;
    bool    hasSaved;

    // status bar
    QLabel  *statusLabel;

    // Clipboard
    QClipboard  *clip;

    // Settings
    QSettings   *settings;

    bool loadFile(const QString &fileName);
    bool saveFile(const QString &fileName);
    bool saveFileAs();
    bool save();
    bool saveBeforeAction();
    void closeEvent(QCloseEvent *event); // 关闭事件
    void initStatus();
    void readSettings();
    void initWindow(QWidget *widget);
};

#endif // MAINWINDOW_H








