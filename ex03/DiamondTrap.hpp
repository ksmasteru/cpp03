#pragma once
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap,  public ScavTrap 
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string& name);
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap& rhs);
        DiamondTrap& operator = (const DiamondTrap& rhs);
        void attack(const std::string& target);
        void whoAmI();
};