#include "ReadFile1.h"

ReadFile1::ReadFile1(QObject *parent) : QObject(parent)
{

}

void ReadFile1::run()
{
    qDebug() << Q_FUNC_INFO << QThread::currentThread();
}
