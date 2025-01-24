#pragma once
#include <iostream>
#include <string>

class ClapTrap{
    private:
    std::string _name;
    int         _health;
    int         _energyPoints;
    int         _Attackdamage;
    
    public:
    ClapTrap(const std::string& name);
    ClapTrap();
    ~ClapTrap();
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};
