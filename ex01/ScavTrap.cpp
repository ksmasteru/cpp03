#include "ScavTrap.hpp"
#include <string>

/*
Because you can never have enough ClapTraps, you will now create a derived robot.
It will be named ScavTrap and will inherit the constructors and destructor from ClapTrap. However, its constructors, destructor and attack() will print different messages.
After all, ClapTraps are aware of their individuality.
*/
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
    this->_health = 100;
    this->_energyPoints = 50;
    this->_Attackdamage = 20;
    std::cout << "ScavTrap " << name << " has been created!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now Gatekeeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " Destructor called" << std::endl;
}