#include "Swimming.h"

Swimming::Swimming(QObject *parent)
    : QObject{parent}
    , _underwater(false)
{
}

Swimming::~Swimming()
{
}

void Swimming::swimForward(int speed)
{
    posY += speed;
}

void Swimming::dive()
{
    _underwater = true;
}

void Swimming::surface()
{
    _underwater = false;
}

bool Swimming::isUnderwater()
{
    return _underwater;
}
