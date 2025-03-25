#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

#include <string>

class HumanB
{
	private:
		Weapon* m_weapon = nullptr;
		std::string m_name;

	public:
		HumanB(std::string name);

		void attack();

		void setWeapon(Weapon& weapon);
};

#endif
