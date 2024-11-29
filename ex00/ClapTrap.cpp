#include "ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap(std::string &new_name)
{
	this->_name = new_name;
	this->_hitPoints = 10;
 	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

std::string	 ClapTrap::getName() const
{
	return (this->_name);
}

std::string	ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		target.takeDamage(this->_attackDamage);
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->getName() << "attaks "
		<< target.getName() << ", causing " << this->getAttackDamage()
		<< " points of damage!" << std::endl; 
	}
	else
		std::cout << "Insufficient Energy points for attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned	int	amount)
{
	if (this->_hitPoints >= 10)
		this->_hitPoints -= 10;
}

void	ClapTrap::beRepaired(unsigned	int	 amount)
{
	if (this->_energyPoints > 0)
	{
		this->_hitPoints +=  amount;
		this->_energyPoints -= 1;
	}
	else
		std::cout << "Insufficient Energy points for Repair" << std::endl;
}

