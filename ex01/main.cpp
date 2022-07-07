# include "Zombie.hpp"

int main()
{
	int n = 8;
	Zombie *horde = zombieHorde(n, "newbie");

	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}
	// for (int i = 0; i < n; i++)
	// {
	// 	delete (horde + i);
	// }
	delete[] (horde);
}