#ifndef LIBWORKTEST_H
#define LIBWORKTEST_H

#include <QObject>

class LibWorkTest : public QObject
{

public:
    LibWorkTest();

    QString readLibWork();
    void showDebug();
};

#endif // LIBWORKTEST_H
