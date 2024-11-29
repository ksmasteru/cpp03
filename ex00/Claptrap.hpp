#pragma once

class ClapTrap
{
	private:
	std::string	_name;
	uint		hitPoints;
	uint		energyPoints;
	uint		attackDamage;
	public:
	void	attack(conststd::string& target);
	void	takeDamage(unsigned	int amount);
	void	beRepaired(unsigned	int amount);
};
