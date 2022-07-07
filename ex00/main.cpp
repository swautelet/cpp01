#include "Zombie.hpp"

int main()
{
	Zombie *newbie;

	newbie = newZombie("newby");
	randomChump("paul");
	newbie->announce();
	delete newbie;
}