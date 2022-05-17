#include "Mammal.h"

Mammal::Mammal(QObject *parent)
    : Animal(parent)
{
}

Mammal::~Mammal()
{
}

bool Mammal::hasHairOrFur()
{
    return true;
}

bool Mammal::hasFeathers()
{
    return false;
}
