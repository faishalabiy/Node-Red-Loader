#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWebEngineView>
#include <QSettings>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSettings::setPath(QSettings::NativeFormat, QSettings::UserScope, "../config/");
    QSettings settings(QSettings::NativeFormat, QSettings::UserScope, "Respati", "controller");
    m_ip_controller = settings.value("Controller/ip").toString();

    ui->lbl_LoadingGif->setVisible(false);

    //loadingScreen();

    m_webView = new QWebEngineView(this);
    m_webView->showFullScreen();

    ui->hlMain->addWidget(m_webView);
    m_webView->setUrl(QUrl("http://" + m_ip_controller + ":1880"));
    qDebug() << m_ip_controller << endl;

    //m_webView->showFullScreen();
    //m_webView->hide();
}

void MainWindow::loadingScreen()
{
    QMovie *loadingGif = new QMovie(QCoreApplication::applicationDirPath() + "/loading1.gif");
    ui->lbl_LoadingGif->setMovie(loadingGif);
    ui->lbl_LoadingGif->setVisible(true);
    ui->lbl_LoadingGif->raise();
    loadingGif->start();

    for (int i=0; i<1000; i++){
        QThread::msleep(10);
        qApp->processEvents(QEventLoop::AllEvents);
    }

    ui->lbl_LoadingGif->setVisible(false);
    loadingGif->stop();

}

MainWindow::~MainWindow()
{
    delete ui;
}
