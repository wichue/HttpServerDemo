#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <QFile>
#include <QDir>

#include "httplistener.h"
#include "httprequesthandler.h"
#include "helloworldcontroller.h"
#include "listdatacontroller.h"
#include "requestmapper.h"
#include "httpclient.h"

using namespace stefanfrings;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QSettings* listenerSettings;
    HttpListener *pHttpListener;

    httpClient *phttpClient;
};

#endif // MAINWINDOW_H
