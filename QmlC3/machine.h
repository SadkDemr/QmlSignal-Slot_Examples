#ifndef MACHINE_H
#define MACHINE_H

#include <QObject>
#include <QDebug>
#include <QTimer>
#include <QVariant>

class machine : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int workload READ value WRITE setValue NOTIFY progress)
public:
    explicit machine(QObject *parent = nullptr);
    int value();
    void setValue(int data);

signals:
    void progress();
    void started();
    void stopped();
    void paused();
    void resumed();

public slots:
    void start();
    void stop();
    void pause();
    void resume();

private slots:
    void timeout();

private:
    QTimer m_timer;
    int m_value;

};

#endif // MACHINE_H
