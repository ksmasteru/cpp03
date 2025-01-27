#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    //ClapTrap hoka("ay");
    ScavTrap hiku("hiku");
    hiku.attack("fff");
    hiku.takeDamage(20);
    hiku.takeDamage(20);
    hiku.takeDamage(20);
    hiku.takeDamage(20);
    hiku.takeDamage(200);
    hiku.attack("ff");
    FragTrap koko("fff");
    koko.highFivesGuys();
    hiku.guardGate();
}