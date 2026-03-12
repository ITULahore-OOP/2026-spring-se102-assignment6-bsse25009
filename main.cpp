#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main()
{
    // Create heroes
    Hero hero1("Aragorn", 100, 50);
    Hero hero2("Legolas", 80, 60);
    Warrior warrior1("Gimli", 120, 45, 15);
    Knight knight1("Arthur", 150, 60, 20, 25);
    Spellblade spellblade1("Gandalf", 80, 100, 30, 40, 10);
    
    // Create guild
    Guild guild("Fellowship");
    
    // Add heroes to guild
    guild += &hero1;
    guild += &hero2;
    guild += &warrior1;
    guild += &knight1;
    guild += &spellblade1;
    

    guild.displayGuildStats();
    cout << endl;
    
    
    cout << guild << endl;
    

    
    cout << "Hero1 > Hero2: " << (hero1 > hero2) << endl;
    cout << "Hero1 + Hero2 health: " << (hero1 + hero2) << endl;
    
    
    cout << "Warrior effective health: " << warrior1.calculateEffectiveHealth() << endl;
    
  
    
    cout << "Knight burst damage: " << knight1.calculateBurstDamage() << endl;
    
    
    cout << "Spellblade hybrid damage: " << spellblade1.calculateHybridDamage() << endl;
    
    
    cout << "\nHero takes 30 damage!" << endl;
    hero1.takeDamage(30);
    cout << "Hero health now: " << hero1.getHealth() << endl;
    
    return 0;
}