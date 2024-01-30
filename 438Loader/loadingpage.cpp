#include "loadingpage.h"
#include "mainwindow.h"
#include "ui_loadingpage.h"
#include <QApplication>
#include <QMovie>
#include <QTimer>
#include <QLabel>

LoadingPage::LoadingPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoadingPage)
{
    ui->setupUi(this);
    loadingAnimation();
}

void LoadingPage::loadingAnimation()
{

    QMovie *loadingMovie = new QMovie(QCoreApplication::applicationDirPath() + "/loading1.gif");
    ui->lbl_loadingGif->setMovie(loadingMovie);
    loadingMovie->start();

    QTimer::singleShot(10000, this, &LoadingPage::openMainWindow);
}

void LoadingPage::openMainWindow()
{
    this->hide();
    MainWindow mainWindow;
    mainWindow.show();
}

LoadingPage::~LoadingPage()
{
    delete ui;
}
