/**
  http客户端
  */
#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>

namespace Ui {
class httpClient;
}

class httpClient : public QWidget
{
    Q_OBJECT

public:
    explicit httpClient(QWidget *parent = nullptr);
    ~httpClient();

private:
    Ui::httpClient *ui;
    QNetworkAccessManager *manager;  //请求句柄
public slots:
    void replyFinished(QNetworkReply *reply);
private slots:
    void on_pushButton_clicked();//发起请求
};

#endif // HTTPCLIENT_H
