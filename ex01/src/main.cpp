#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name);

int main()
{
	int numberOfZombies = 10;

	std::cout << "Welcome to the Zombie program!\n";

	std::cout << "Allocating " << numberOfZombies << " zombies\n";

	Zombie *horde = zombieHorde(numberOfZombies, "Zum");

	for (int i = 0; i < numberOfZombies; i++)
	{
		horde[i].announce();
	}

	delete[] horde;

	return 0;
}
