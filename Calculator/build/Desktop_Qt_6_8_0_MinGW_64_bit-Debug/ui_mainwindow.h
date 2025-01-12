/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *result_show;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_plus_munus;
    QPushButton *pushButton_procent;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_8;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_18;
    QPushButton *pushButton_0;
    QPushButton *pushButton_dot;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(317, 390);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        result_show = new QLabel(centralwidget);
        result_show->setObjectName("result_show");
        result_show->setGeometry(QRect(0, 0, 321, 91));
        result_show->setMinimumSize(QSize(241, 61));
        result_show->setStyleSheet(QString::fromUtf8("QLabel {\n"
" font-size: 50px;\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(-6, 90, 83, 61));
        pushButton_clear->setMinimumSize(QSize(61, 61));
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  font-size: 20px;\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_plus_munus = new QPushButton(centralwidget);
        pushButton_plus_munus->setObjectName("pushButton_plus_munus");
        pushButton_plus_munus->setGeometry(QRect(74, 90, 83, 61));
        pushButton_plus_munus->setMinimumSize(QSize(61, 61));
        pushButton_plus_munus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 20px;\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_procent = new QPushButton(centralwidget);
        pushButton_procent->setObjectName("pushButton_procent");
        pushButton_procent->setGeometry(QRect(154, 90, 83, 61));
        pushButton_procent->setMinimumSize(QSize(61, 61));
        pushButton_procent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   font-size: 20px;\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName("pushButton_divide");
        pushButton_divide->setGeometry(QRect(234, 90, 83, 61));
        pushButton_divide->setMinimumSize(QSize(61, 61));
        pushButton_divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   font-size: 20px;\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(72, 150, 83, 61));
        pushButton_8->setMinimumSize(QSize(61, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_mult = new QPushButton(centralwidget);
        pushButton_mult->setObjectName("pushButton_mult");
        pushButton_mult->setGeometry(QRect(235, 150, 83, 61));
        pushButton_mult->setMinimumSize(QSize(61, 61));
        pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   font-size: 20px;\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 150, 71, 61));
        pushButton_7->setMinimumSize(QSize(61, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(153, 150, 83, 61));
        pushButton_9->setMinimumSize(QSize(61, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(72, 210, 83, 61));
        pushButton_5->setMinimumSize(QSize(61, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName("pushButton_minus");
        pushButton_minus->setGeometry(QRect(236, 210, 83, 61));
        pushButton_minus->setMinimumSize(QSize(61, 61));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   font-size: 20px;\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(-5, 210, 81, 61));
        pushButton_4->setMinimumSize(QSize(61, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(153, 210, 83, 61));
        pushButton_6->setMinimumSize(QSize(61, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(72, 270, 83, 61));
        pushButton_2->setMinimumSize(QSize(61, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName("pushButton_plus");
        pushButton_plus->setGeometry(QRect(235, 270, 83, 61));
        pushButton_plus->setMinimumSize(QSize(61, 61));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   font-size: 20px;\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(-5, 270, 81, 61));
        pushButton_1->setMinimumSize(QSize(61, 61));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(152, 270, 83, 61));
        pushButton_3->setMinimumSize(QSize(61, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setGeometry(QRect(234, 330, 83, 61));
        pushButton_18->setMinimumSize(QSize(61, 61));
        pushButton_18->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" font-size: 20px;\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(-2, 330, 161, 61));
        pushButton_0->setMinimumSize(QSize(61, 61));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName("pushButton_dot");
        pushButton_dot->setGeometry(QRect(154, 330, 83, 61));
        pushButton_dot->setMinimumSize(QSize(61, 61));
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        result_show->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_plus_munus->setText(QCoreApplication::translate("MainWindow", "x/-", nullptr));
        pushButton_procent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
