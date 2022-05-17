#include "Animal.h"

Animal::Animal(QObject *parent)
    : QObject{parent}
    , _alive(true)
{
}

Animal::~Animal()
{
}

bool Animal::isAlive()
{
    return _alive;
}
