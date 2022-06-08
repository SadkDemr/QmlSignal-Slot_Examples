#include "machine.h"

machine::machine(QObject *parent)
    : QObject{parent}
{
    m_timer.setInterval(1000);
    connect(&m_timer,&QTimer::timeout,this,&machine::timeout);

}

int machine::value()
{
    qInfo()<<"Returning value";
    return m_value;

}

void machine::setValue(int data)
{
    qInfo()<<"Setting value";
    m_value = data;
    emit started();
}

void machine::start()
{
    setValue(0);
    m_timer.start();
    emit started();

}

void machine::stop()
{
    m_timer.stop();
    emit stopped();

}

void machine::pause()
{
    m_timer.stop();
    emit paused();

}

void machine::resume()
{
    m_timer.stop();
    emit resumed();

}

void machine::timeout()
{
    m_value++;
    emit progress();
    if(m_value > 90) stop();

}





