#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name)
: m_name(name)
{}

void HumanB::attack()
{
	// <name> attacks with their <weapon type>
	std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	m_weapon = &weapon;
}
