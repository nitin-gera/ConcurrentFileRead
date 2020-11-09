#include <QCoreApplication>
#include <QThreadPool>
#include "ReadFile1.h"
#include "ReadFile2.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ReadFile1   file1_obj;
    ReadFile2   file2_obj;

    qDebug() << QThread::currentThread();

    QThreadPool::globalInstance()->start(&file1_obj);
    QThreadPool::globalInstance()->start(&file2_obj);

    return a.exec();
}
