#include <iostream>
#include <string>

int main()
{
	std::string brian = "HI THIS IS BRAIN";

	std::string *stringPTR = &brian;

	std::string& stringREF = brian;

	// Printing

	std::cout << &brian << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	// And then...

	std::cout << brian << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return 0;
}
