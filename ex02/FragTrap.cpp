#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamages = 20;
}

FragTrap::FragTrap(std::string new_name) : ClapTrap(new_name)
{
	std::cout << "FragTrap constructor with name called" << std::endl;
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamages = 20;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
	m_name = copy.m_name;
	m_hitPoints = copy.m_hitPoints;
	m_energyPoints = copy.m_energyPoints;
	m_attackDamages = copy.m_attackDamages;
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if(m_hitPoints > 0 && m_energyPoints > 0)
	{
		std::cout << "FragTrap " << m_name << " attacks " << target << ", causing " << m_attackDamages << " points of damage!" << std::endl;
		m_energyPoints -=1;
	}
}