#include "Claptrap.hpp"

int main()
{
	ClapTrap player1("Tic");
	ClapTrap player2("Tac");

	player1.attack("Tac");
	player2.takeDamage(0);
	player2.beRepaired(10);

	player2.attack("Tic");
	player1.takeDamage(0);
	player1.beRepaired(10);
}