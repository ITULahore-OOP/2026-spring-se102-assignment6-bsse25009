#include "Guild.h"
#include <iostream>
using namespace std;

Guild::Guild(string name) : guildName(name), memberCount(0) {
    for (int i = 0; i < 15; ++i) {
        roster[i] = nullptr;
    }
}

int Guild::calculateTotalGuildPower() const {
    int totalPower = 0;
    for (int i = 0; i < memberCount; ++i) {
        if (roster[i] != nullptr) {
            totalPower += roster[i]->getPower();
        }
    }
    return totalPower;
}

void Guild::displayGuildStats() {
    cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount << "/15" << endl;
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}

void Guild::operator += (Hero* newHero) {
    if (memberCount < 15) {
        roster[memberCount] = newHero;
        memberCount++;
    } else {
        cout << "Guild is at full capacity!" << endl;
    }
}

ostream& operator << (ostream& os, const Guild& guild) {
    os << "Guild: " << guild.guildName << endl;
    os << "Members: " << guild.memberCount << "/15" << endl;
    for (int i = 0; i < guild.memberCount; ++i) {
        if (guild.roster[i] != nullptr) {
            os << "- " << guild.roster[i]->getName() 
               << " (Power: " << guild.roster[i]->getPower() << ")" << endl;
        }
    }
    return os;
}

Guild::~Guild() {
    cout << "The guild " << guildName << " has been disbanded!" << endl;
}
