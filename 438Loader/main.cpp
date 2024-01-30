#include "mainwindow.h"
#include "loadingpage.h"
#include <QApplication>
#include <QTimer>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoadingPage LoadingPage;
    LoadingPage.show();
    MainWindow w;

    for (int i =0; i<1000;i++)
    {
        QThread::msleep(10);
        qApp->processEvents(QEventLoop::AllEvents);

    }
    LoadingPage.hide();
    w.show();
    //MainWindow w;
    //w.show();

    return a.exec();
}
