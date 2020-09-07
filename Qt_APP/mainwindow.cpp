#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    std::string s = std::to_string(rand() % 10 + 1);
    ui->label->setText(s);
}
