#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamages = 20;
}

ScavTrap::ScavTrap(std::string new_name) : ClapTrap(new_name)
{
	std::cout << "ScavTrap constructor with name called" << std::endl;
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamages = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	m_name = copy.m_name;
	m_hitPoints = copy.m_hitPoints;
	m_energyPoints = copy.m_energyPoints;
	m_attackDamages = copy.m_attackDamages;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if(m_hitPoints > 0 && m_energyPoints > 0)
	{
		std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing " << m_attackDamages << " points of damage!" << std::endl;
		m_energyPoints -=1;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << m_name << "  is now in Gate keeper mode" << std::endl;
}