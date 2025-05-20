#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap player1("Tic");
	ScavTrap player2("Tac");
	FragTrap player3("Tuc");

	player1.attack("Tac");
	player2.takeDamage(0);
	player2.beRepaired(10);

	player2.attack("Tic");
	player1.takeDamage(20);
	player1.beRepaired(30);
	player2.guardGate();

	player3.attack("Tic");
	player2.takeDamage(30);
	player2.beRepaired(30);
	player3.highFivesGuys();
	return (0);
}