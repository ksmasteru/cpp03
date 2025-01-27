#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 100; 
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor for " << this->_name << " has been called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor for " << name << " has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs) : ClapTrap(rhs)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& rhs)
{
    std::cout << "FragTrap assignement operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    ClapTrap::operator=(rhs);
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High five Guys !" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << 
            this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << "insufficient energyPoints/healthPoints to perform attack operation for " << this->_name << std::endl;
}

FragTrap::~FragTrap()
{
     std::cout << "FragTrap " << this->_name << " has been destroyed!" << std::endl;
}