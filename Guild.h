#ifndef GUILD_H
#define GUILD_H
#include <string>
#include <iostream>
#include "Hero.h"
using namespace std;

class Guild
{
private:
    string guildName;
    Hero* roster[15];
    int memberCount;
public:
    Guild(string name);
    int calculateTotalGuildPower() const;
    void displayGuildStats();  
    void operator += (Hero* newHero);
    friend ostream& operator << (ostream& os, const Guild& guild); 
    ~Guild();
};
#endif