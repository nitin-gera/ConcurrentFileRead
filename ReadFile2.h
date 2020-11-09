#ifndef READFILE2_H
#define READFILE2_H

#include <QObject>
#include <QRunnable>
#include <QDebug>
#include <QThread>

class ReadFile2 : public QObject, public QRunnable
{
    Q_OBJECT
public:
    explicit ReadFile2(QObject *parent = nullptr);

    void run() override;
signals:

};

#endif // READFILE2_H
