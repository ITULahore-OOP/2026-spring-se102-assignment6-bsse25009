#include "Knight.h"

Knight::Knight(string name, int hp, int power, int armor, int charge) 
    : Warrior(name, hp, power, armor)
{
    chargeBonus = charge;
}

int Knight::getChargeBonus() const
{
    return chargeBonus;
}

int Knight::calculateBurstDamage() const
{
    return getPower() + chargeBonus;
}

Knight::~Knight()
{
    // Destructor
}
