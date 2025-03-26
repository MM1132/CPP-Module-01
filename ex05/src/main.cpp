#include <iostream>

#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("error");
	harl.complain("error");
	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");

	return 0;
}
