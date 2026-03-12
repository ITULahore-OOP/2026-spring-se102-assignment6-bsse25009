#ifndef SPELLBLADE_H
#define SPELLBLADE_H

#include "Warrior.h"
#include "MagicalEntity.h"
using namespace std;

class Spellblade: public Warrior, public MagicalEntity
{
public:
    Spellblade(string name, int health, int mana, int strength, int spell, int armor);
    int calculateHybridDamage();  
    ~Spellblade();
};

#endif