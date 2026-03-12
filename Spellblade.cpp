#include "Spellblade.h"

Spellblade::Spellblade(string name, int health, int mana, int strength, int spell, int armor)
    : Warrior(name, health, strength, armor), MagicalEntity(mana, spell) {}

int Spellblade::calculateHybridDamage() 

{
    
    return getPower() + getSpellPower();
}

Spellblade::~Spellblade()
{
    // Destructor
}
