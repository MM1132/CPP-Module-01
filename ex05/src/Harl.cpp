#include "Harl.hpp"

#include <iostream>

void Harl::debug(void)
{
	std::cout << "(DEBUG): I love having extra bacon!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "(INFO): I cannot belive adding extra bacon costs more money!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "(WARNING): I think I deserve extra bacon for free!" << std::endl;
}

void Harl::error(void)
{
	std::cout << "(ERROR): This is unacceptable!" << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*complainPointers[4])(void) = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};
	std::string complainTypes[4] = {
		"debug", "info", "warning", "error"
	};

	for (size_t i = 0; i < complainTypes->length(); i++)
	{
		if (complainTypes[i] == level)
		{
			(this->*complainPointers[i])();
		}
	}
}
