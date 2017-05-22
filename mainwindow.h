#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_startButton_clicked();

    void run();

    void on_stopButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer=new QTimer(this);


};

#endif // MAINWINDOW_H
