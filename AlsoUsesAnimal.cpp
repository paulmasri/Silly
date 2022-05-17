#include "AlsoUsesAnimal.h"

AlsoUsesAnimal::AlsoUsesAnimal(QObject *parent)
    : QObject{parent}
    , _pet(nullptr)
{
}

AlsoUsesAnimal::~AlsoUsesAnimal()
{
}

void AlsoUsesAnimal::receivePet(Animal *animal)
{
    if (_pet != nullptr)
        _pet->deleteLater();

    _pet = animal;
    _pet->setParent(this);
}

Animal *AlsoUsesAnimal::giveAwayPet()
{
    Animal *temp = _pet;
    _pet = nullptr;
    return temp;
}
