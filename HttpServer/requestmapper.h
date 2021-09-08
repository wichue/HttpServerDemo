/**
  请求映射器（Request Mapper）,它将在两个控制器之间切换
  */

#ifndef REQUESTMAPPER_H
#define REQUESTMAPPER_H

#include "httprequesthandler.h"
#include "helloworldcontroller.h"
#include "listdatacontroller.h"

using namespace stefanfrings;

class RequestMapper : public HttpRequestHandler {
    Q_OBJECT
public:
    RequestMapper(QObject* parent=nullptr);
    void service(HttpRequest& request, HttpResponse& response);
private:
    HelloWorldController mhelloWorldController;
    ListDataController mlistDataController;
};

#endif // REQUESTMAPPER_H
