#include "Python.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Py_Initialize();
    int result = a.exec();
    Py_Finalize();
    return result;
}
