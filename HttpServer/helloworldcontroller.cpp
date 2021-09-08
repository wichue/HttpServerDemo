#include "helloworldcontroller.h"
#include <QJsonObject>
#include <QJsonDocument>

HelloWorldController::HelloWorldController(QObject* parent):HttpRequestHandler(parent)
{
    // empty
}

void HelloWorldController::service(HttpRequest &request, HttpResponse &response)
{
//    response.write("Hello World",true);

    QJsonObject object;
    object.insert("station","业务受理员");
    object.insert("name","王晨");
    object.insert("number","0001");
    object.insert("pic","http://192.168.1.15:8080/8.jpg");
    object.insert("orderNum","A123456789B");

    response.write(QJsonDocument(object).toJson(),true);
}
