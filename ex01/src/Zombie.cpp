#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
: m_name(name)
{}

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout << m_name << ": DESTRUCTED!" << std::endl;
}

void Zombie::announce()
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	m_name = name;
}
