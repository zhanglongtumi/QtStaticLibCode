#include "libworktest.h"
#include <QDebug>
#include "inwork.h"

LibWorkTest::LibWorkTest()
{
}

QString LibWorkTest::readLibWork()
{
    return "lib work test";
}

void LibWorkTest::showDebug()
{
    InWork inwork;
    qDebug() << inwork.readWork();
    inwork.doWork();
}

