#pragma once

#include <QObject>

#include "Animal.h"

class AlsoUsesAnimal : public QObject
{
    Q_OBJECT

public:
    explicit AlsoUsesAnimal(QObject *parent = nullptr);
    virtual ~AlsoUsesAnimal();

    void receivePet(Animal *animal);
    Animal *giveAwayPet();

protected:
    Animal *_pet;
};
