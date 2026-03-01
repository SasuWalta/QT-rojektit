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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBar1;
    QProgressBar *progressBar2;
    QPushButton *swichPlayer1;
    QPushButton *swichPlayer2;
    QPushButton *twoMin;
    QPushButton *fiveMin;
    QPushButton *startGame;
    QPushButton *stopGame;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        progressBar1 = new QProgressBar(centralwidget);
        progressBar1->setObjectName("progressBar1");
        progressBar1->setGeometry(QRect(70, 50, 171, 31));
        progressBar1->setValue(0);
        progressBar2 = new QProgressBar(centralwidget);
        progressBar2->setObjectName("progressBar2");
        progressBar2->setGeometry(QRect(480, 50, 181, 31));
        progressBar2->setValue(0);
        swichPlayer1 = new QPushButton(centralwidget);
        swichPlayer1->setObjectName("swichPlayer1");
        swichPlayer1->setGeometry(QRect(110, 100, 80, 24));
        swichPlayer2 = new QPushButton(centralwidget);
        swichPlayer2->setObjectName("swichPlayer2");
        swichPlayer2->setGeometry(QRect(540, 100, 80, 24));
        twoMin = new QPushButton(centralwidget);
        twoMin->setObjectName("twoMin");
        twoMin->setGeometry(QRect(250, 270, 80, 24));
        fiveMin = new QPushButton(centralwidget);
        fiveMin->setObjectName("fiveMin");
        fiveMin->setGeometry(QRect(420, 270, 80, 24));
        startGame = new QPushButton(centralwidget);
        startGame->setObjectName("startGame");
        startGame->setGeometry(QRect(200, 390, 80, 24));
        stopGame = new QPushButton(centralwidget);
        stopGame->setObjectName("stopGame");
        stopGame->setGeometry(QRect(430, 390, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        swichPlayer1->setText(QCoreApplication::translate("MainWindow", "Swich player", nullptr));
        swichPlayer2->setText(QCoreApplication::translate("MainWindow", "Swich player", nullptr));
        twoMin->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        fiveMin->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        startGame->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
        stopGame->setText(QCoreApplication::translate("MainWindow", "Stop Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
