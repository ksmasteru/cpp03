#include "ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10),
    _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10),
     _attackDamage(0)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs) : _name(rhs._name), _hitPoints(rhs._hitPoints), 
    _energyPoints(rhs._energyPoints), _attackDamage(rhs._attackDamage) 
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& rhs)
{
    if (this == &rhs)
        return (*this);
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << 
            this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else
    {
        std::cout << "insufficient energyPoints/healthPoints to perform attack operation for " << this->_name << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        this->_hitPoints -= amount;
        std::cout << this->_name << " took " << amount << " points of damage" << std::endl;
        if  (this->_hitPoints < 0)
            this->_hitPoints = 0;
    }
    else
        std::cout << "ClapTrap " << this->_name << " has no hitPoints left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0)
    {
        std::cout << "ClapTrap heals for " << amount << std::endl;
        this->_energyPoints--; 
        this->_hitPoints += amount;
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