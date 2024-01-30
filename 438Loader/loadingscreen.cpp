#include "loadingscreen.h"
#include "ui_loadingscreen.h"
#include <QMovie>

LoadingScreen::LoadingScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoadingScreen)
{
    ui->setupUi(this);

    m_movie = new QMovie(this);
}

LoadingScreen::~LoadingScreen()
{
    delete ui;
}
