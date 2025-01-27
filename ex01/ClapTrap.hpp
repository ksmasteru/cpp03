#pragma once
#include <iostream>
#include <string>

class ClapTrap{
    protected:
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;;
    int         _attackDamage;
    
    public:
    ClapTrap(const std::string& name);
    ClapTrap();
    ClapTrap(const ClapTrap& rhs);
    ClapTrap& operator= (const ClapTrap& rhs);
    virtual ~ClapTrap();
    // if a class is meant getting inherited of
    // mark it as virtual : avoids memory leaks when Upcasting
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};