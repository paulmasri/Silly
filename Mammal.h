#pragma once

#include <QObject>

#include "Animal.h"

class Mammal : public Animal
{
    Q_OBJECT

public:
    explicit Mammal(QObject *parent = nullptr);
    virtual ~Mammal();

    bool hasHairOrFur() override;
    bool hasFeathers() override;
};
