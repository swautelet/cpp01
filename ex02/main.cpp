#include<iostream>
#include<string>

int main()
{
	std::string brain = "HI THIS IS BRAIN";

	std::string *stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << &brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	
	std::cout << brain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	// std::transform(stringREF.begin(), stringREF.end(), stringREF.begin(), ::tolower);
	// std::cout << brain << std::endl;
}