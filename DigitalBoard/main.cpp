#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QDebug>
#include <QDesktopWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap yourPixmap(":/images/splashScreen.png");
    QPixmap pixmapForSplash = yourPixmap.scaled(800, 500);

    QSplashScreen *splash=new QSplashScreen();
    splash->setPixmap(pixmapForSplash);
    splash->show();
    MainWindow w;
    QDesktopWidget dw;
    QTimer::singleShot(4000,splash,SLOT(close()));
    QTimer::singleShot(4000,&w,SLOT(showFullScreen()));

    qDebug()<<dw.width()<<","<<dw.size();

    return a.exec();
}
