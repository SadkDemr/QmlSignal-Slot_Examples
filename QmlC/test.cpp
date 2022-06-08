#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{

}

int Test::number()
{
    //Return a number
    qInfo() << "Called number()";
    return 42;
}

void Test::bark()
{
    qInfo() << "Test ";


    // return 5;
}
