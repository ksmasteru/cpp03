#include "ClapTrap.hpp"

int main()
{
    std::string name = "robot";
    ClapTrap robot(name);
    robot.takeDamage(20);
        robot.takeDamage(20);
    robot.takeDamage(20);
    robot.attack("ha");
}