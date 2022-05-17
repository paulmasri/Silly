#pragma once

#include <QObject>

class Swimming : public QObject
{
    Q_OBJECT

public:
    explicit Swimming(QObject *parent = nullptr);
    virtual ~Swimming();

    void swimForward(int speed);

    void dive();
    void surface();
    bool isUnderwater();

    int posX, posY;

protected:
    bool _underwater;
};
