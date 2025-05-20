#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>



class ScavTrap : public ClapTrap
{

	public :

	ScavTrap();
	ScavTrap(const ScavTrap &other);
	ScavTrap(std::string new_name);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap &copy);
	void attack(const std::string& target);
	void guardGate();

	

	private :



};










#endif