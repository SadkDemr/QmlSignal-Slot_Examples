#include "test.h"

test::test(QObject *parent)
    : QObject{parent}
{

}

void test::work(QVariant data)
{
    bool ok;
    int numIn= data.toInt(&ok);
    int numOut= 0;

    if(!ok){
       qWarning()<<"No a valid number ";
    }else {
        int numRand = QRandomGenerator::global()->bounded(1000);
        numOut = numIn * numRand;
        qInfo()<<"In"<<numIn;
        qInfo()<<"Random"<<numRand;
        qInfo()<<"Out"<<numOut;
    }

    emit status(QVariant(numOut));


}
