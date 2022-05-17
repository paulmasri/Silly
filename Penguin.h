#pragma once

#include <QObject>

#include "Animal.h"
#include "Swimming.h"

class Penguin : public Animal
{
    Q_OBJECT

public:
    explicit Penguin(QObject *parent = nullptr);
    virtual ~Penguin();

    bool hasLegs() override;
    int numberOfLegs() override;
    bool hasHairOrFur() override;
    bool hasFeathers() override;

    void diveAndSwimSequence();

protected:
    Swimming _swimmingAbility;
};
