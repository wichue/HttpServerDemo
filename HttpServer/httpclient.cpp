#include "httpclient.h"
#include "ui_httpclient.h"

httpClient::httpClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::httpClient)
{
    ui->setupUi(this);
    manager = new QNetworkAccessManager(this);  //新建QNetworkAccessManager对象
    connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished(QNetworkReply*)));//关联信号和槽
}

httpClient::~httpClient()
{
    delete ui;
}

void httpClient::replyFinished(QNetworkReply *reply)
{
    QString allinfo = reply->readAll();
    qDebug()<<"["<<__FILE__<<"]"<<__LINE__<<__FUNCTION__<<" "<<(allinfo);
}

void httpClient::on_pushButton_clicked()
{
    char quest_array[256]="http://localhost:8090/hello";
    QNetworkRequest quest;
    quest.setUrl(QUrl(quest_array));
    quest.setHeader(QNetworkRequest::UserAgentHeader,"RT-Thread ART");
    /*发送get网络请求*/
    manager->get(quest);
}
