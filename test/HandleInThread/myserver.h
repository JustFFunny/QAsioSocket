﻿#ifndef MYSERVER_H
#define MYSERVER_H

#include "qasiotcpserverparent.h"
#include <QObjectCleanupHandler>

class MyServer : public QAsioTcpServerParent
{
    Q_OBJECT
public:
    explicit MyServer(int thsize,int buffersize = 4096,QObject *parent = 0);
    ~MyServer();

signals:

public slots:

protected:
    bool haveErro(const asio::error_code &);
    void incomingConnection(asio::ip::tcp::socket * socket);

private:
    QObjectCleanupHandler handler;
    int bsize;
    Q_DISABLE_COPY(MyServer)
};

#endif // MYSERVER_H
