#include "Claptrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap player1("Tic");
	ScavTrap player2("Tac");

	player1.attack("Tac");
	player2.takeDamage(0);
	player2.beRepaired(10);

	player2.attack("Tic");
	player1.takeDamage(20);
	player1.beRepaired(30);
	player2.guardGate();
	return (0);
}