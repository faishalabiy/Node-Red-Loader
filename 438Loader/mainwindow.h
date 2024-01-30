#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMovie>
#include <QThread>
#include <QTimer>

namespace Ui {
class MainWindow;
}

QT_BEGIN_NAMESPACE
class QWebEngineView;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWebEngineView *m_webView;
    QString m_ip_controller;

    QMovie *m_movie;

    void loadingScreen();

    bool m_isLoading;

    //void showWebView;
    //void hideWebView;
};

#endif // MAINWINDOW_H
