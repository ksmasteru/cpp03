#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public :
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& rhs);
    ScavTrap& operator= (const ScavTrap& rhs);
    virtual ~ScavTrap();
    void guardGate();
    void attack(const std::string& target);
};
