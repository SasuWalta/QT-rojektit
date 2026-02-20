#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QString txt = "27";
   // ui->lineEdit->setText(27);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //Luetaan nykyinen luku
    QString luku = ui->lineEdit->text();
    qDebug() << "Nykyinen luku merkkijonona" << luku;
    //muutetaan merkkijomo kokonaisluvuksi
    int num = luku.toInt();
    qDebug() << "Nykyinen luku kokonaislukuna" << num;
    //lisataan lukuun 1
    num = num+1;
    qDebug() << "Uusi luku kokonaislukuna" << num;
    //kirjoitetaan uusi luku
    QString txt = QString::number(num);
    ui->lineEdit->setText(txt);


}


void MainWindow::on_pushButton_2_clicked()
{
    QString txt = "0";
     ui->lineEdit->setText(txt);
}

