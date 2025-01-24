#include "ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap(const std::string& name)
{
    this->_name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << "attacks " << target << " causing " << this->_Attackdamage << " points of damage!" << 
            this->_energyPoints << std::endl;
        this->_energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_health > 0)
    {
        this->_health -= amount;
        std::cout << this->_name << "took " << amount << " points of damage" << std::endl;
        if  (this->_health < 0)
            this->_health = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0 && this->_health > 0)
    {
        std::cout << "ClapTrap heals for " << amount << std::endl;
        this->_energyPoints--; 
    }
    else
        std::cout << "Repair action couldn't be performed on " << this->_name << std::endl;
}
/*
 * When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
    When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
    cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points
    or energy points left.*/
// ClapTrap <name> attacks <target>, causing <damage> points of damage!
