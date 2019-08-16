/********************************************************************************
** Form generated from reading UI file 'qwmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWINDOW_H
#define UI_QWMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWindow
{
public:
    QAction *actWindowInsite;
    QAction *actWidgetInsite;
    QAction *actQuit;
    QAction *actDoc_Open;
    QAction *actWindow;
    QAction *actWidget;
    QWidget *centralWidget;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QTabWidget *tabWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QWMainWindow)
    {
        if (QWMainWindow->objectName().isEmpty())
            QWMainWindow->setObjectName(QStringLiteral("QWMainWindow"));
        QWMainWindow->resize(930, 573);
        actWindowInsite = new QAction(QWMainWindow);
        actWindowInsite->setObjectName(QStringLiteral("actWindowInsite"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actWindowInsite->setIcon(icon);
        actWidgetInsite = new QAction(QWMainWindow);
        actWidgetInsite->setObjectName(QStringLiteral("actWidgetInsite"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/100.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actWidgetInsite->setIcon(icon1);
        actQuit = new QAction(QWMainWindow);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon2);
        actDoc_Open = new QAction(QWMainWindow);
        actDoc_Open->setObjectName(QStringLiteral("actDoc_Open"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actDoc_Open->setIcon(icon3);
        actWindow = new QAction(QWMainWindow);
        actWindow->setObjectName(QStringLiteral("actWindow"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actWindow->setIcon(icon4);
        actWidget = new QAction(QWMainWindow);
        actWidget->setObjectName(QStringLiteral("actWidget"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/804.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actWidget->setIcon(icon5);
        centralWidget = new QWidget(QWMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(30, 20, 811, 461));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(30, 20, 69, 20));
        splitter->addWidget(groupBox);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(true);
        splitter->addWidget(tabWidget);
        QWMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QWMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 930, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        QWMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QWMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setAutoFillBackground(false);
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        QWMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QWMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QWMainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        mainToolBar->addAction(actWidgetInsite);
        mainToolBar->addAction(actWidget);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actWindowInsite);
        mainToolBar->addAction(actWindow);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(QWMainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), QWMainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QWMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWindow)
    {
        QWMainWindow->setWindowTitle(QApplication::translate("QWMainWindow", "\345\244\232\347\252\227\345\217\243\345\272\224\347\224\250\347\250\213\345\272\217", Q_NULLPTR));
        actWindowInsite->setText(QApplication::translate("QWMainWindow", "\345\265\214\345\205\245\345\274\217MainWindow", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actWindowInsite->setToolTip(QApplication::translate("QWMainWindow", "\345\265\214\345\205\245\345\274\217MainWindow", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actWidgetInsite->setText(QApplication::translate("QWMainWindow", "\345\265\214\345\205\245\345\274\217Widget", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actWidgetInsite->setToolTip(QApplication::translate("QWMainWindow", "Widget\345\265\214\345\205\245\345\274\217\347\252\227\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDoc_Open->setText(QApplication::translate("QWMainWindow", "\346\211\223\345\274\200\346\226\207\346\241\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDoc_Open->setToolTip(QApplication::translate("QWMainWindow", "\346\211\223\345\274\200\346\226\207\346\241\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actWindow->setText(QApplication::translate("QWMainWindow", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actWindow->setToolTip(QApplication::translate("QWMainWindow", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actWidget->setText(QApplication::translate("QWMainWindow", "\347\213\254\347\253\213Widget\347\252\227\345\217\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actWidget->setToolTip(QApplication::translate("QWMainWindow", "\346\226\260\345\273\272Widget\347\213\254\347\253\213\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("QWMainWindow", "GroupBox", Q_NULLPTR));
        menu->setTitle(QApplication::translate("QWMainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("QWMainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("QWMainWindow", "\346\217\222\345\205\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWMainWindow: public Ui_QWMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWINDOW_H
