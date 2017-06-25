#include "inwork.h"
#include <QDebug>

InWork::InWork(QObject *parent) : QObject(parent)
{

}

void InWork::doWork()
{
    qDebug() << "wor do work";
}

QString InWork::readWork()
{
    return "abcdef";
}
