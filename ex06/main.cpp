#include"Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of parameter." << std::endl;
		return (0);
	}
	Harl	Karen;
	Karen.complain(argv[1]);
}
