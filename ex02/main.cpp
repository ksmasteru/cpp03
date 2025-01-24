#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::string name = "robot";
    ClapTrap robot(name);
    ScavTrap kali(name);
    kali.guardGate();
    kali.beRepaired(50);
}