#pragma once

#include <QObject>

#include "Animal.h"

class Animal : public QObject
{
    Q_OBJECT

public:
    explicit Animal(QObject *parent = nullptr);
    virtual ~Animal();

    virtual bool hasLegs() = 0;
    virtual int numberOfLegs() = 0;
    virtual bool hasHairOrFur() = 0;
    virtual bool hasFeathers() = 0;

    bool isAlive();

protected:
    bool _alive;
};
