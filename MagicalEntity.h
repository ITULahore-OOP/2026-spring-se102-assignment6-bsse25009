#ifndef MAGICAL_ENTITY_H
#define MAGICAL_ENTITY_H
#include <string>
#include <iostream>
using namespace std;

class MagicalEntity
{
private:
    int manaPool;
    int spellPower;
public:
    MagicalEntity(int mana = 0, int spell = 0);  
    int getMana() const;
    int getSpellPower() const;
    ~MagicalEntity();
};

#endif