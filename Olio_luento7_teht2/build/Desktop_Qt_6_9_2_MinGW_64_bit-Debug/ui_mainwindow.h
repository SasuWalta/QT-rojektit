/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *num1Edit;
    QLineEdit *num2Edit;
    QLineEdit *num3Edit;
    QPushButton *plusButton;
    QPushButton *minusButton;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *enterButton;
    QPushButton *clearButton;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *divideButton;
    QPushButton *multiplyButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(673, 360);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        num1Edit = new QLineEdit(centralwidget);
        num1Edit->setObjectName("num1Edit");
        num1Edit->setGeometry(QRect(80, 50, 113, 28));
        num2Edit = new QLineEdit(centralwidget);
        num2Edit->setObjectName("num2Edit");
        num2Edit->setGeometry(QRect(270, 50, 113, 28));
        num3Edit = new QLineEdit(centralwidget);
        num3Edit->setObjectName("num3Edit");
        num3Edit->setGeometry(QRect(450, 50, 113, 28));
        plusButton = new QPushButton(centralwidget);
        plusButton->setObjectName("plusButton");
        plusButton->setGeometry(QRect(460, 140, 90, 29));
        minusButton = new QPushButton(centralwidget);
        minusButton->setObjectName("minusButton");
        minusButton->setGeometry(QRect(460, 180, 90, 29));
        pushButton1 = new QPushButton(centralwidget);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setGeometry(QRect(90, 140, 90, 29));
        pushButton2 = new QPushButton(centralwidget);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setGeometry(QRect(210, 140, 90, 29));
        pushButton3 = new QPushButton(centralwidget);
        pushButton3->setObjectName("pushButton3");
        pushButton3->setGeometry(QRect(330, 140, 90, 29));
        enterButton = new QPushButton(centralwidget);
        enterButton->setObjectName("enterButton");
        enterButton->setGeometry(QRect(330, 270, 90, 29));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(220, 270, 90, 29));
        pushButton4 = new QPushButton(centralwidget);
        pushButton4->setObjectName("pushButton4");
        pushButton4->setGeometry(QRect(90, 190, 90, 29));
        pushButton5 = new QPushButton(centralwidget);
        pushButton5->setObjectName("pushButton5");
        pushButton5->setGeometry(QRect(210, 190, 90, 29));
        pushButton6 = new QPushButton(centralwidget);
        pushButton6->setObjectName("pushButton6");
        pushButton6->setGeometry(QRect(330, 190, 90, 29));
        pushButton7 = new QPushButton(centralwidget);
        pushButton7->setObjectName("pushButton7");
        pushButton7->setGeometry(QRect(90, 230, 90, 29));
        pushButton8 = new QPushButton(centralwidget);
        pushButton8->setObjectName("pushButton8");
        pushButton8->setGeometry(QRect(210, 230, 90, 29));
        pushButton9 = new QPushButton(centralwidget);
        pushButton9->setObjectName("pushButton9");
        pushButton9->setGeometry(QRect(330, 230, 90, 29));
        divideButton = new QPushButton(centralwidget);
        divideButton->setObjectName("divideButton");
        divideButton->setGeometry(QRect(460, 220, 90, 29));
        multiplyButton = new QPushButton(centralwidget);
        multiplyButton->setObjectName("multiplyButton");
        multiplyButton->setGeometry(QRect(460, 270, 90, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 673, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        plusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        enterButton->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        divideButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        multiplyButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
