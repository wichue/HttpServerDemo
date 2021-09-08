#include "requestmapper.h"


RequestMapper::RequestMapper(QObject* parent): HttpRequestHandler(parent) 
{
    // empty
}

void RequestMapper::service(HttpRequest& request, HttpResponse& response)
{
    QByteArray path=request.getPath();		//获取请求路径
    qDebug("RequestMapper: path=%s",path.data());

	//请求映射器的作用：根据不同的url调用不同的控制器
    if (path=="/" || path=="/hello")
    {
        mhelloWorldController.service(request, response);
    }
    else if (path=="/list")
    {
        mlistDataController.service(request, response);
    }
    else
    {
        response.setStatus(404,"Not found");
        response.write("The URL is wrong, no such document.",true);
    }

    qDebug("RequestMapper: finished request");
}
