#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    phttpClient = new httpClient;
    phttpClient->show();

    listenerSettings=new QSettings("./webapp1.ini", QSettings::IniFormat);
    listenerSettings->beginGroup("listener");
    // Start the HTTP server
    pHttpListener = new HttpListener(listenerSettings, new RequestMapper());
}

MainWindow::~MainWindow()
{
    delete ui;
}
