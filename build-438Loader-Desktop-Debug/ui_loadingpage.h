/********************************************************************************
** Form generated from reading UI file 'loadingpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGPAGE_H
#define UI_LOADINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadingPage
{
public:
    QWidget *centralwidget;
    QLabel *lbl_loadingGif;

    void setupUi(QMainWindow *LoadingPage)
    {
        if (LoadingPage->objectName().isEmpty())
            LoadingPage->setObjectName(QStringLiteral("LoadingPage"));
        LoadingPage->resize(400, 333);
        centralwidget = new QWidget(LoadingPage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lbl_loadingGif = new QLabel(centralwidget);
        lbl_loadingGif->setObjectName(QStringLiteral("lbl_loadingGif"));
        lbl_loadingGif->setGeometry(QRect(0, 0, 401, 331));
        lbl_loadingGif->setStyleSheet(QStringLiteral(""));
        lbl_loadingGif->setAlignment(Qt::AlignCenter);
        LoadingPage->setCentralWidget(centralwidget);

        retranslateUi(LoadingPage);

        QMetaObject::connectSlotsByName(LoadingPage);
    } // setupUi

    void retranslateUi(QMainWindow *LoadingPage)
    {
        LoadingPage->setWindowTitle(QApplication::translate("LoadingPage", "MainWindow", Q_NULLPTR));
        lbl_loadingGif->setText(QApplication::translate("LoadingPage", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">Loading...</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoadingPage: public Ui_LoadingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGPAGE_H
