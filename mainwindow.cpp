#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
     QString defaultFileName = QString::fromStdString("file.txt");
     QString getFileName = QFileDialog::getOpenFileName(this, "Load File", defaultFileName, "Files (*.txt *.csv)");
}
