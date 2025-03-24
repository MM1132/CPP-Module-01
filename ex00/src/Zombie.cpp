#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
: m_name(name)
{}

Zombie::~Zombie()
{
	std::cout << m_name << ": DESTRUCTED!" << std::endl;
}

void Zombie::announce()
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
