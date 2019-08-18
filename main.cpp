#include "qwmainwindow.h"
#include <QApplication>
#include    <QTextCodec>

#pragma execution_character_set("utf-8")

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    QWMainWindow w;
    w.show();

    return a.exec();
}
