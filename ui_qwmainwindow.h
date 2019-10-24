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
    QAction *actionNewNoteBook;
    QAction *action_N_Ctrl_N;
    QAction *action_W_Ctrl_Shfit_N;
    QAction *action_O_Ctrl_O;
    QAction *action_S_Ctrl_S;
    QAction *action_A_Ctrl_Shift_S_U;
    QAction *action_U;
    QAction *action_P_Ctrl_P;
    QAction *action_X;
    QAction *action_U_2;
    QAction *action_P_Ctrl_P_2;
    QAction *action_X_2;
    QAction *action_U_Ctrl_Z;
    QAction *action_T_Ctrl_X;
    QAction *action_C_Ctrl_C;
    QAction *action_P_Ctrl_V;
    QAction *action_L_Del;
    QAction *action_F_Ctrl_F;
    QAction *action_N_F3;
    QAction *action_N_Shfit_F3;
    QAction *action_R_Ctrl_H;
    QAction *action_G_Ctrl_G;
    QAction *action_A_Ctrl_A;
    QAction *action_D_F5;
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
        QWMainWindow->setContextMenuPolicy(Qt::CustomContextMenu);
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
        actionNewNoteBook = new QAction(QWMainWindow);
        actionNewNoteBook->setObjectName(QStringLiteral("actionNewNoteBook"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/images/516.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewNoteBook->setIcon(icon6);
        action_N_Ctrl_N = new QAction(QWMainWindow);
        action_N_Ctrl_N->setObjectName(QStringLiteral("action_N_Ctrl_N"));
        action_W_Ctrl_Shfit_N = new QAction(QWMainWindow);
        action_W_Ctrl_Shfit_N->setObjectName(QStringLiteral("action_W_Ctrl_Shfit_N"));
        action_O_Ctrl_O = new QAction(QWMainWindow);
        action_O_Ctrl_O->setObjectName(QStringLiteral("action_O_Ctrl_O"));
        action_S_Ctrl_S = new QAction(QWMainWindow);
        action_S_Ctrl_S->setObjectName(QStringLiteral("action_S_Ctrl_S"));
        action_A_Ctrl_Shift_S_U = new QAction(QWMainWindow);
        action_A_Ctrl_Shift_S_U->setObjectName(QStringLiteral("action_A_Ctrl_Shift_S_U"));
        action_U = new QAction(QWMainWindow);
        action_U->setObjectName(QStringLiteral("action_U"));
        action_P_Ctrl_P = new QAction(QWMainWindow);
        action_P_Ctrl_P->setObjectName(QStringLiteral("action_P_Ctrl_P"));
        action_X = new QAction(QWMainWindow);
        action_X->setObjectName(QStringLiteral("action_X"));
        action_U_2 = new QAction(QWMainWindow);
        action_U_2->setObjectName(QStringLiteral("action_U_2"));
        action_P_Ctrl_P_2 = new QAction(QWMainWindow);
        action_P_Ctrl_P_2->setObjectName(QStringLiteral("action_P_Ctrl_P_2"));
        action_X_2 = new QAction(QWMainWindow);
        action_X_2->setObjectName(QStringLiteral("action_X_2"));
        action_U_Ctrl_Z = new QAction(QWMainWindow);
        action_U_Ctrl_Z->setObjectName(QStringLiteral("action_U_Ctrl_Z"));
        action_T_Ctrl_X = new QAction(QWMainWindow);
        action_T_Ctrl_X->setObjectName(QStringLiteral("action_T_Ctrl_X"));
        action_C_Ctrl_C = new QAction(QWMainWindow);
        action_C_Ctrl_C->setObjectName(QStringLiteral("action_C_Ctrl_C"));
        action_P_Ctrl_V = new QAction(QWMainWindow);
        action_P_Ctrl_V->setObjectName(QStringLiteral("action_P_Ctrl_V"));
        action_L_Del = new QAction(QWMainWindow);
        action_L_Del->setObjectName(QStringLiteral("action_L_Del"));
        action_F_Ctrl_F = new QAction(QWMainWindow);
        action_F_Ctrl_F->setObjectName(QStringLiteral("action_F_Ctrl_F"));
        action_N_F3 = new QAction(QWMainWindow);
        action_N_F3->setObjectName(QStringLiteral("action_N_F3"));
        action_N_Shfit_F3 = new QAction(QWMainWindow);
        action_N_Shfit_F3->setObjectName(QStringLiteral("action_N_Shfit_F3"));
        action_R_Ctrl_H = new QAction(QWMainWindow);
        action_R_Ctrl_H->setObjectName(QStringLiteral("action_R_Ctrl_H"));
        action_G_Ctrl_G = new QAction(QWMainWindow);
        action_G_Ctrl_G->setObjectName(QStringLiteral("action_G_Ctrl_G"));
        action_A_Ctrl_A = new QAction(QWMainWindow);
        action_A_Ctrl_A->setObjectName(QStringLiteral("action_A_Ctrl_A"));
        action_D_F5 = new QAction(QWMainWindow);
        action_D_F5->setObjectName(QStringLiteral("action_D_F5"));
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
        comboBox->setEditable(false);
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
        menu->addAction(action_N_Ctrl_N);
        menu->addAction(action_W_Ctrl_Shfit_N);
        menu->addAction(action_O_Ctrl_O);
        menu->addAction(action_S_Ctrl_S);
        menu->addAction(action_A_Ctrl_Shift_S_U);
        menu->addSeparator();
        menu->addAction(action_U_2);
        menu->addAction(action_P_Ctrl_P_2);
        menu->addAction(action_X_2);
        menu_2->addAction(action_U_Ctrl_Z);
        menu_2->addSeparator();
        menu_2->addAction(action_T_Ctrl_X);
        menu_2->addAction(action_C_Ctrl_C);
        menu_2->addAction(action_P_Ctrl_V);
        menu_2->addAction(action_L_Del);
        menu_2->addSeparator();
        menu_2->addAction(action_F_Ctrl_F);
        menu_2->addAction(action_N_F3);
        menu_2->addAction(action_N_Shfit_F3);
        menu_2->addAction(action_R_Ctrl_H);
        menu_2->addAction(action_G_Ctrl_G);
        menu_2->addSeparator();
        menu_2->addAction(action_A_Ctrl_A);
        menu_2->addAction(action_D_F5);
        mainToolBar->addAction(actWidgetInsite);
        mainToolBar->addAction(actionNewNoteBook);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actWidget);
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
        actionNewNoteBook->setText(QApplication::translate("QWMainWindow", "\346\226\260\345\273\272\347\254\224\350\256\260\346\234\254", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNewNoteBook->setToolTip(QApplication::translate("QWMainWindow", "\345\210\233\345\273\272\346\226\260\347\232\204\347\254\224\350\256\260\346\234\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_N_Ctrl_N->setText(QApplication::translate("QWMainWindow", "\346\226\260\345\273\272(N)                   Ctrl+N", Q_NULLPTR));
        action_W_Ctrl_Shfit_N->setText(QApplication::translate("QWMainWindow", "\346\226\260\347\252\227\345\217\243(W)       Ctrl+Shfit+N", Q_NULLPTR));
        action_O_Ctrl_O->setText(QApplication::translate("QWMainWindow", "\346\211\223\345\274\200(O)...                 Ctrl+O", Q_NULLPTR));
        action_S_Ctrl_S->setText(QApplication::translate("QWMainWindow", "\344\277\235\345\255\230(S)                     Ctrl+S", Q_NULLPTR));
        action_A_Ctrl_Shift_S_U->setText(QApplication::translate("QWMainWindow", "\345\217\246\345\255\230\344\270\272(A)          Ctrl+Shift+S", Q_NULLPTR));
        action_U->setText(QApplication::translate("QWMainWindow", "\n"
"\351\241\265\351\235\242\350\256\276\347\275\256(U)...", Q_NULLPTR));
        action_P_Ctrl_P->setText(QApplication::translate("QWMainWindow", "\346\211\223\345\215\260(P)...            Ctrl+P", Q_NULLPTR));
        action_X->setText(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272(X)", Q_NULLPTR));
        action_U_2->setText(QApplication::translate("QWMainWindow", "\351\241\265\351\235\242\350\256\276\347\275\256(U)...              ", Q_NULLPTR));
        action_P_Ctrl_P_2->setText(QApplication::translate("QWMainWindow", "\346\211\223\345\215\260(P)...                    Ctrl+P", Q_NULLPTR));
        action_X_2->setText(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272(X)                     ", Q_NULLPTR));
        action_U_Ctrl_Z->setText(QApplication::translate("QWMainWindow", "\346\222\244\351\224\200(U)                   Ctrl+Z", Q_NULLPTR));
        action_T_Ctrl_X->setText(QApplication::translate("QWMainWindow", "\345\211\252\345\210\207(T)                   Ctrl+X", Q_NULLPTR));
        action_C_Ctrl_C->setText(QApplication::translate("QWMainWindow", "\345\244\215\345\210\266(C)                   Ctrl+C", Q_NULLPTR));
        action_P_Ctrl_V->setText(QApplication::translate("QWMainWindow", "\347\262\230\350\264\264(P)                   Ctrl+V", Q_NULLPTR));
        action_L_Del->setText(QApplication::translate("QWMainWindow", "\345\210\240\351\231\244(L)                        Del", Q_NULLPTR));
        action_F_Ctrl_F->setText(QApplication::translate("QWMainWindow", "\346\237\245\346\211\276(F)                   Ctrl+F", Q_NULLPTR));
        action_N_F3->setText(QApplication::translate("QWMainWindow", "\346\237\245\346\211\276\344\270\213\344\270\200\344\270\252(N)               F3", Q_NULLPTR));
        action_N_Shfit_F3->setText(QApplication::translate("QWMainWindow", "\346\237\245\346\211\276\344\270\212\344\270\200\344\270\252(N)       Shfit+F3", Q_NULLPTR));
        action_R_Ctrl_H->setText(QApplication::translate("QWMainWindow", "\346\233\277\346\215\242(R)...                Ctrl+H", Q_NULLPTR));
        action_G_Ctrl_G->setText(QApplication::translate("QWMainWindow", "\350\275\254\345\210\260(G)...                Ctrl+G", Q_NULLPTR));
        action_A_Ctrl_A->setText(QApplication::translate("QWMainWindow", "\345\205\250\351\200\211(A)                   Ctrl+A", Q_NULLPTR));
        action_D_F5->setText(QApplication::translate("QWMainWindow", "\346\227\266\351\227\264/\346\227\245\346\234\237(D)                  F5", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QWMainWindow", "GroupBox", Q_NULLPTR));
        menu->setTitle(QApplication::translate("QWMainWindow", "\346\226\207\344\273\266(F)", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("QWMainWindow", "\347\274\226\350\276\221(E)", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("QWMainWindow", "\346\240\274\345\274\217(O)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWMainWindow: public Ui_QWMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWINDOW_H
