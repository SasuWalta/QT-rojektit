#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(&timer1, &QTimer::timeout, this, &MainWindow::updatePlayer1);
    connect(&timer2, &QTimer::timeout, this, &MainWindow::updatePlayer2);

    ui->progressBar1->setRange(0, 100);
    ui->progressBar2->setRange(0, 100);

    ui->progressBar1->setValue(0);
    ui->progressBar2->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_progressBar1_valueChanged(int value)
{

}


void MainWindow::on_progressBar2_valueChanged(int value)
{

}


void MainWindow::on_swichPlayer1_clicked()
{

    if (currentTurn != Player1) return;

    timer1.stop();
    currentTurn = Player2;
    timer2.start(1000);
}


void MainWindow::on_swichPlayer2_clicked()
{


    if (currentTurn != Player2) return;

    timer2.stop();
    currentTurn = Player1;
    timer1.start(1000);
}


void MainWindow::on_twoMin_clicked()
{
    maxTime =120;
    player1Time = maxTime;
    player2Time = maxTime;
    ui->progressBar1->setValue(100);
    ui->progressBar2->setValue(100);
}



void MainWindow::on_fiveMin_clicked()
{
    maxTime = 300;
    player1Time = maxTime;
    player2Time = maxTime;

    ui->progressBar1->setValue(100);
    ui->progressBar2->setValue(100);
}


void MainWindow::on_startGame_clicked()
{
    if (maxTime == 0) return;

    timer1.stop();
    timer2.stop();

    currentTurn = Player1;
    timer1.start(1000);

}


void MainWindow::on_stopGame_clicked()
{
    timer1.stop();
    timer2.stop();

    ui->progressBar1->setValue(0);
    ui->progressBar2->setValue(0);
}

void MainWindow::updatePlayer2()
{
    player2Time--;
    int percent =(player2Time * 100) / maxTime;
    ui->progressBar2->setValue(percent);

    if(player2Time <= 0){
    timer2.stop();
    currentTurn = none;

    }
}
void MainWindow::updatePlayer1()
{
    player1Time--;
    int percent =(player1Time * 100) / maxTime;
    ui->progressBar1->setValue(percent);

    if(player1Time <= 0){
    timer1.stop();
    currentTurn = none;
    }
}
