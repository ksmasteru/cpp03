#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->_name = "Default";
    ClapTrap::_name = "Default_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string& name) : FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs) : ClapTrap(rhs)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& rhs)
{
    if (this == &rhs)
        return (*this);
    ClapTrap::operator=(rhs);
    return (*this);    
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name : " << this->_name << std::endl;
    std::cout << "ClapTrap name : " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->_name << " has been destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    return (ScavTrap::attack(target));
}