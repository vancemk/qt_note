#ifndef PUBLICHEADS_H
#define PUBLICHEADS_H

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
#include <QDialog>
#include <QInputDialog>
#include <QLineEdit>

#include <iostream>

#define log_msg(fmt, log_arg...)  \
            printf("[%s:%d][%s]: " fmt "\n", __FILE__, __LINE__, __FUNCTION__, ##log_arg)





#endif // PUBLICHEADS_H
