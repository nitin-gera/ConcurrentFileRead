#include "ReadFile2.h"

ReadFile2::ReadFile2(QObject *parent) : QObject(parent)
{

}

void ReadFile2::run()
{
    qDebug() << Q_FUNC_INFO << QThread::currentThread();
}
