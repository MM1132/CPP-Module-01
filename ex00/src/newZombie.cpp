#include "Zombie.hpp"

#include <string>

// This function creates a zombie, names it, and returns it so you can use it outside of the function scope.
Zombie* newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name);
	return newZombie;
}
