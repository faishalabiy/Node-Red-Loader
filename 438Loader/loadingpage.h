#ifndef LOADINGPAGE_H
#define LOADINGPAGE_H

#include <QMainWindow>
#include <QApplication>
#include <QMovie>
#include <QTimer>
#include <QLabel>
#include "mainwindow.h"

namespace Ui {
class LoadingPage;
}

class LoadingPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoadingPage(QWidget *parent = nullptr);
    ~LoadingPage();

private:
    Ui::LoadingPage *ui;
    void loadingAnimation();

private slots:
    void openMainWindow();
};

#endif // LOADINGPAGE_H
