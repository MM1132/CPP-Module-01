#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

namespace {
	std::string readFileAsString(std::ifstream& inFile)
	{
		std::ostringstream buffer;
		buffer << inFile.rdbuf();
		return buffer.str();
	}

	std::string myReplace(std::string str, std::string replace, std::string with)
	{
		if (replace.empty())
			return str;

		size_t foundPosition;
		while (true)
		{
			foundPosition = str.find(replace);

			if (foundPosition == std::string::npos)
				break;
			
			str.erase(foundPosition, replace.length());
			str.insert(foundPosition, with);
		}

		return str;
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./program <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::ifstream inFile(argv[1]);
	if (!inFile)
	{
		std::cerr << "Input file could not be opened :c" << std::endl;
		return 1;
	}
	
	std::string inFileString = readFileAsString(inFile);
	inFile.close();

	std::string outFileString = myReplace(inFileString, argv[2], argv[3]);

	// Create the new file
	std::ofstream outFile(std::string(argv[1]) + ".replace");
	outFile << outFileString;

	outFile.close();

	return 0;
}
