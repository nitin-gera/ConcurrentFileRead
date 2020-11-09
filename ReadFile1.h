#ifndef READFILE1_H
#define READFILE1_H

#include <QObject>
#include <QRunnable>
#include <QDebug>
#include <QThread>

class ReadFile1 : public QObject, public QRunnable
{
    Q_OBJECT
public:
    explicit ReadFile1(QObject *parent = nullptr);

signals:


    // QRunnable interface
public:
    void run() override;
};

#endif // READFILE1_H
