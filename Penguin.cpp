#include "Penguin.h"

Penguin::Penguin(QObject *parent)
    : Animal(parent)
    , _swimmingAbility(this)
{
}

Penguin::~Penguin()
{
}

bool Penguin::hasLegs()
{
    return true;
}

int Penguin::numberOfLegs()
{
    return 2;
}

void Penguin::diveAndSwimSequence()
{
    _swimmingAbility.dive();
    _swimmingAbility.swimForward(5);
}

bool Penguin::hasHairOrFur()
{
    return true;
}

bool Penguin::hasFeathers()
{
    return false;
}
