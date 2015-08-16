//#include "mainwindow.h"
//asdasdads
#include"easygame.h"
#include <QApplication>
#include <QTextCodec>
#include <QTimer>

int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    EasyGame w;
    w.show();

    return app.exec();
}

