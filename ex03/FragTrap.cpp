#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_health = 100;
    this->_energyPoints = 100;
    this->_Attackdamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_health = 100;
    this->_energyPoints = 100;
    this->_Attackdamage = 30;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High five Guys !" << std::endl;
}

FragTrap::~FragTrap()
{
     std::cout << "FragTrap " << this->_name << " has been destroyed!" << std::endl;
}

