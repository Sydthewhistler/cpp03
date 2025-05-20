#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{

	public :

	FragTrap();
	FragTrap(const FragTrap &other);
	FragTrap(std::string new_name);
	~FragTrap();
	FragTrap& operator=(const FragTrap &copy);
	void attack(const std::string& target);
	void highFivesGuys(void);


	

	private :



};












#endif