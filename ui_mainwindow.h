/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionUndo_U_Ctrl_Z;
    QAction *actionCut_T_Ctrl_X;
    QAction *actionCopy_C_Ctrl_C;
    QAction *actionPaste_P_Ctrl_V;
    QAction *actionDelete_L_Del;
    QAction *actionFind_F_Ctrl_F;
    QAction *actionFind_Next_N_F3;
    QAction *actionReplace_R_Ctrl_H;
    QAction *actionGoto_G_Ctrl_G;
    QAction *actionSelect_All_A_Ctrl_A;
    QAction *actionTime_Date_D_F5;
    QAction *actionExit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitterMain;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QTreeView *treeView;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *LabFileName;
    QLabel *LabFileSize;
    QLabel *LabType;
    QCheckBox *chkIsDir;
    QLabel *LabPath;
    QMenuBar *menuBar;
    QMenu *menuFile_F;
    QMenu *menuEdit_E;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 559);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionUndo_U_Ctrl_Z = new QAction(MainWindow);
        actionUndo_U_Ctrl_Z->setObjectName(QString::fromUtf8("actionUndo_U_Ctrl_Z"));
        actionCut_T_Ctrl_X = new QAction(MainWindow);
        actionCut_T_Ctrl_X->setObjectName(QString::fromUtf8("actionCut_T_Ctrl_X"));
        actionCopy_C_Ctrl_C = new QAction(MainWindow);
        actionCopy_C_Ctrl_C->setObjectName(QString::fromUtf8("actionCopy_C_Ctrl_C"));
        actionPaste_P_Ctrl_V = new QAction(MainWindow);
        actionPaste_P_Ctrl_V->setObjectName(QString::fromUtf8("actionPaste_P_Ctrl_V"));
        actionDelete_L_Del = new QAction(MainWindow);
        actionDelete_L_Del->setObjectName(QString::fromUtf8("actionDelete_L_Del"));
        actionFind_F_Ctrl_F = new QAction(MainWindow);
        actionFind_F_Ctrl_F->setObjectName(QString::fromUtf8("actionFind_F_Ctrl_F"));
        actionFind_Next_N_F3 = new QAction(MainWindow);
        actionFind_Next_N_F3->setObjectName(QString::fromUtf8("actionFind_Next_N_F3"));
        actionReplace_R_Ctrl_H = new QAction(MainWindow);
        actionReplace_R_Ctrl_H->setObjectName(QString::fromUtf8("actionReplace_R_Ctrl_H"));
        actionGoto_G_Ctrl_G = new QAction(MainWindow);
        actionGoto_G_Ctrl_G->setObjectName(QString::fromUtf8("actionGoto_G_Ctrl_G"));
        actionSelect_All_A_Ctrl_A = new QAction(MainWindow);
        actionSelect_All_A_Ctrl_A->setObjectName(QString::fromUtf8("actionSelect_All_A_Ctrl_A"));
        actionTime_Date_D_F5 = new QAction(MainWindow);
        actionTime_Date_D_F5->setObjectName(QString::fromUtf8("actionTime_Date_D_F5"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(3);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(3, 3, 3, 3);
        splitterMain = new QSplitter(centralWidget);
        splitterMain->setObjectName(QString::fromUtf8("splitterMain"));
        splitterMain->setOrientation(Qt::Horizontal);
        groupBox_3 = new QGroupBox(splitterMain);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(4, 4, 4, 4);
        treeView = new QTreeView(groupBox_3);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout_3->addWidget(treeView);

        splitterMain->addWidget(groupBox_3);
        splitter = new QSplitter(splitterMain);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        splitter->addWidget(groupBox);
        splitterMain->addWidget(splitter);

        verticalLayout_5->addWidget(splitterMain);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMaximumSize(QSize(16777215, 100));
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LabFileName = new QLabel(groupBox_4);
        LabFileName->setObjectName(QString::fromUtf8("LabFileName"));

        horizontalLayout->addWidget(LabFileName);

        LabFileSize = new QLabel(groupBox_4);
        LabFileSize->setObjectName(QString::fromUtf8("LabFileSize"));

        horizontalLayout->addWidget(LabFileSize);

        LabType = new QLabel(groupBox_4);
        LabType->setObjectName(QString::fromUtf8("LabType"));

        horizontalLayout->addWidget(LabType);

        chkIsDir = new QCheckBox(groupBox_4);
        chkIsDir->setObjectName(QString::fromUtf8("chkIsDir"));

        horizontalLayout->addWidget(chkIsDir);


        verticalLayout_4->addLayout(horizontalLayout);

        LabPath = new QLabel(groupBox_4);
        LabPath->setObjectName(QString::fromUtf8("LabPath"));

        verticalLayout_4->addWidget(LabPath);


        verticalLayout_5->addWidget(groupBox_4);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 23));
        menuFile_F = new QMenu(menuBar);
        menuFile_F->setObjectName(QString::fromUtf8("menuFile_F"));
        menuEdit_E = new QMenu(menuBar);
        menuEdit_E->setObjectName(QString::fromUtf8("menuEdit_E"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile_F->menuAction());
        menuBar->addAction(menuEdit_E->menuAction());
        menuFile_F->addAction(actionNew);
        menuFile_F->addAction(actionOpen);
        menuFile_F->addAction(actionSave);
        menuFile_F->addAction(actionSave_as);
        menuFile_F->addSeparator();
        menuFile_F->addAction(actionExit);
        menuEdit_E->addAction(actionUndo_U_Ctrl_Z);
        menuEdit_E->addSeparator();
        menuEdit_E->addAction(actionCut_T_Ctrl_X);
        menuEdit_E->addAction(actionCopy_C_Ctrl_C);
        menuEdit_E->addAction(actionPaste_P_Ctrl_V);
        menuEdit_E->addAction(actionDelete_L_Del);
        menuEdit_E->addSeparator();
        menuEdit_E->addAction(actionFind_F_Ctrl_F);
        menuEdit_E->addAction(actionFind_Next_N_F3);
        menuEdit_E->addAction(actionReplace_R_Ctrl_H);
        menuEdit_E->addAction(actionGoto_G_Ctrl_G);
        menuEdit_E->addSeparator();
        menuEdit_E->addAction(actionSelect_All_A_Ctrl_A);
        menuEdit_E->addAction(actionTime_Date_D_F5);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\347\263\273\347\273\237Model/View", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New(N)                Ctrl+N", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open(O)               Ctrl+O", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save(S)                 Ctrl+S", nullptr));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save As(A)        ", nullptr));
        actionUndo_U_Ctrl_Z->setText(QApplication::translate("MainWindow", "Undo(U)               Ctrl+Z", nullptr));
        actionCut_T_Ctrl_X->setText(QApplication::translate("MainWindow", "Cut(T)                  Ctrl+X", nullptr));
        actionCopy_C_Ctrl_C->setText(QApplication::translate("MainWindow", "Copy(C)               Ctrl+C", nullptr));
        actionPaste_P_Ctrl_V->setText(QApplication::translate("MainWindow", "Paste(P)               Ctrl+V", nullptr));
        actionDelete_L_Del->setText(QApplication::translate("MainWindow", "Delete(L)                  Del", nullptr));
        actionFind_F_Ctrl_F->setText(QApplication::translate("MainWindow", "Find(F)...               Ctrl+F", nullptr));
        actionFind_Next_N_F3->setText(QApplication::translate("MainWindow", "Find Next(N)...            F3", nullptr));
        actionReplace_R_Ctrl_H->setText(QApplication::translate("MainWindow", "Replace(R)...        Ctrl+H", nullptr));
        actionGoto_G_Ctrl_G->setText(QApplication::translate("MainWindow", "Goto(G)...            Ctrl+G", nullptr));
        actionSelect_All_A_Ctrl_A->setText(QApplication::translate("MainWindow", "Select All(A)         Ctrl+A", nullptr));
        actionTime_Date_D_F5->setText(QApplication::translate("MainWindow", "Time/Date(D)             F5", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "TreeView", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "ListView", nullptr));
        groupBox_4->setTitle(QString());
        LabFileName->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        LabFileSize->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\247\345\260\217\357\274\232", nullptr));
        LabType->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271\347\261\273\345\236\213\357\274\232", nullptr));
        chkIsDir->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271\346\230\257\347\233\256\345\275\225", nullptr));
        LabPath->setText(QApplication::translate("MainWindow", "\350\267\257\345\276\204\345\220\215\357\274\232", nullptr));
        menuFile_F->setTitle(QApplication::translate("MainWindow", "File(F)", nullptr));
        menuEdit_E->setTitle(QApplication::translate("MainWindow", "Edit(E)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
