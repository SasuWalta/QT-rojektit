#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_progressBar1_valueChanged(int value);

    void on_progressBar2_valueChanged(int value);

    void on_swichPlayer1_clicked();

    void on_swichPlayer2_clicked();

    void on_twoMin_clicked();

    void on_fiveMin_clicked();

    void on_startGame_clicked();

    void on_stopGame_clicked();

    void updatePlayer1();

    void updatePlayer2();


private:
    Ui::MainWindow *ui;

    QTimer timer1;
    QTimer timer2;

    int player1Time;
    int player2Time;
    int maxTime;

    enum playerTurn { Player1, Player2, none
    };
    playerTurn currentTurn = none;
};
#endif // MAINWINDOW_H
