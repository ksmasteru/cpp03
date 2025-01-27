#pragma once
#include <iostream>
#include <string>

class ClapTrap{
    private:
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;;
    int         _attackDamage;
    
    public:
    ClapTrap(const std::string& name);
    ClapTrap();
    ClapTrap(const ClapTrap& rhs);
    ClapTrap& operator= (const ClapTrap& rhs);
    ~ClapTrap();
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};