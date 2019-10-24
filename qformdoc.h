#ifndef QFORMDOC_H
#define QFORMDOC_H

#include <QWidget>

namespace Ui {
class QFormDoc;
}

class QFormDoc : public QWidget
{
    Q_OBJECT

public:
    explicit QFormDoc(QWidget *parent = 0);
    QFormDoc(QWidget *parent, const QString pFileName);
    ~QFormDoc();

    void    loadFromFile(const QString& aFileName);
    bool    isFormWindowSaved();
    void    setCurDirPath(QDir & pdir);
    void    setCurFile(QString & pFilename);


private slots:
    void on_actOpen_triggered();

    void on_actFont_triggered();

//    void on_radioButton_clicked();

//    void on_radioButton_2_clicked();

//    void on_radioButton_3_clicked();

//    void on_radioButton_4_clicked();

private:
    Ui::QFormDoc *ui;
    QString mCurrentFile;   //当前文件
    QDir mCurDirPath;       //当前窗口文件所在路径
    bool isFormSaved;
    bool isUntitled;
};

#endif // QFORMDOC_H
