/********************************************************************************
** Form generated from reading UI file 'httpclient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTTPCLIENT_H
#define UI_HTTPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_httpClient
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *httpClient)
    {
        if (httpClient->objectName().isEmpty())
            httpClient->setObjectName(QString::fromUtf8("httpClient"));
        httpClient->resize(583, 390);
        pushButton = new QPushButton(httpClient);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 140, 93, 28));

        retranslateUi(httpClient);

        QMetaObject::connectSlotsByName(httpClient);
    } // setupUi

    void retranslateUi(QWidget *httpClient)
    {
        httpClient->setWindowTitle(QApplication::translate("httpClient", "Form", nullptr));
        pushButton->setText(QApplication::translate("httpClient", "\345\217\221\350\265\267\350\257\267\346\261\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class httpClient: public Ui_httpClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTTPCLIENT_H
