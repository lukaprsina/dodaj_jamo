#include "mainwindow.h"

#include <QApplication>

int WinMain(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;    
    w.show();
    return a.exec();
}
