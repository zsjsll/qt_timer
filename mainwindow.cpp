#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto def=QTime::currentTime().toString();
    ui->timelabel->setText(def);
    connect(timer,SIGNAL(timeout()),this,SLOT(run()));
    timer->start(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_clicked()
{
timer->start(100);
}

void MainWindow::run()
{
auto def=QTime::currentTime().toString();
ui->timelabel->setText(def);
}

void MainWindow::on_stopButton_clicked()
{
timer->stop();
}
