/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *N4;
    QPushButton *N5;
    QPushButton *N1;
    QPushButton *N6;
    QPushButton *add0;
    QPushButton *sub1;
    QPushButton *N7;
    QPushButton *N8;
    QPushButton *N9;
    QPushButton *mul2;
    QPushButton *N0;
    QPushButton *clear;
    QPushButton *enter;
    QPushButton *div3;
    QLineEdit *num2;
    QLineEdit *num1;
    QLineEdit *result;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(190, 160, 80, 41));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(290, 160, 80, 41));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(90, 210, 80, 41));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(190, 210, 80, 41));
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(90, 160, 80, 41));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(290, 210, 80, 41));
        add0 = new QPushButton(centralwidget);
        add0->setObjectName("add0");
        add0->setGeometry(QRect(380, 160, 80, 41));
        sub1 = new QPushButton(centralwidget);
        sub1->setObjectName("sub1");
        sub1->setGeometry(QRect(380, 210, 80, 41));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(90, 260, 80, 41));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(190, 260, 80, 41));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(290, 260, 80, 41));
        mul2 = new QPushButton(centralwidget);
        mul2->setObjectName("mul2");
        mul2->setGeometry(QRect(380, 260, 80, 41));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(90, 310, 80, 41));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(190, 310, 80, 41));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(290, 310, 80, 41));
        div3 = new QPushButton(centralwidget);
        div3->setObjectName("div3");
        div3->setGeometry(QRect(380, 310, 80, 41));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(90, 110, 113, 24));
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(220, 110, 113, 24));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(360, 110, 113, 24));
        label1 = new QLabel(centralwidget);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(110, 80, 49, 16));
        label2 = new QLabel(centralwidget);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(240, 80, 49, 16));
        label3 = new QLabel(centralwidget);
        label3->setObjectName("label3");
        label3->setGeometry(QRect(380, 80, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        add0->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        sub1->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        mul2->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        div3->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "Number1", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "Number2", nullptr));
        label3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
