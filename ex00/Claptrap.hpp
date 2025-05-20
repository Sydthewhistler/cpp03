#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>


class ClapTrap
{

	public :

		ClapTrap();
		ClapTrap(ClapTrap &other);
		ClapTrap(std::string new_name);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap &copy);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


	private :

		std::string m_name;
		unsigned int m_hitPoints;
		unsigned int m_energyPoints;
		unsigned int m_attackDamages;


};




#endif