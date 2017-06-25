#ifndef INWORK_H
#define INWORK_H

#include <QObject>

class InWork : public QObject
{
    Q_OBJECT
public:
    explicit InWork(QObject *parent = nullptr);
    void doWork();
    QString readWork();


signals:

public slots:


};

#endif // INWORK_H
