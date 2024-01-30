/********************************************************************************
** Form generated from reading UI file 'loadingscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGSCREEN_H
#define UI_LOADINGSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadingScreen
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *LoadingScreen)
    {
        if (LoadingScreen->objectName().isEmpty())
            LoadingScreen->setObjectName(QStringLiteral("LoadingScreen"));
        LoadingScreen->resize(400, 333);
        centralwidget = new QWidget(LoadingScreen);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        LoadingScreen->setCentralWidget(centralwidget);

        retranslateUi(LoadingScreen);

        QMetaObject::connectSlotsByName(LoadingScreen);
    } // setupUi

    void retranslateUi(QMainWindow *LoadingScreen)
    {
        LoadingScreen->setWindowTitle(QApplication::translate("LoadingScreen", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoadingScreen: public Ui_LoadingScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGSCREEN_H
