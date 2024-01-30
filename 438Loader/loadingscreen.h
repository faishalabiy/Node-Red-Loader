#ifndef LOADINGSCREEN_H
#define LOADINGSCREEN_H

#include <QMainWindow>

namespace Ui {
class LoadingScreen;
}

class LoadingScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoadingScreen(QWidget *parent = 0);
    ~LoadingScreen();

private:
    Ui::LoadingScreen *ui;
    QMovie *m_movie;
};

#endif // LOADINGSCREEN_H
