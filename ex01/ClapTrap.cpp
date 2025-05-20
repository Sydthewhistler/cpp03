#include "Claptrap.hpp"

ClapTrap::ClapTrap() : m_name("") ,m_hitPoints(10), m_energyPoints(10), m_attackDamages(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;

}

ClapTrap::ClapTrap(std::string new_name) : m_name(new_name) ,m_hitPoints(10), m_energyPoints(10), m_attackDamages(0)
{
	std::cout << "ClapTrap Constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : m_name(other.m_name) ,m_hitPoints(other.m_hitPoints), m_energyPoints(other.m_energyPoints), m_attackDamages(other.m_attackDamages)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
	m_name = copy.m_name;
	m_hitPoints = copy.m_hitPoints;
	m_energyPoints = copy.m_energyPoints;
	m_attackDamages = copy.m_attackDamages;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if(m_hitPoints > 0 && m_energyPoints > 0)
	{
		std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attackDamages << " points of damage!" << std::endl;
		m_energyPoints -=1;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if(m_hitPoints > 0)
	{
		std::cout << "ClapTrap " << m_name << " just lost " << amount << " hit points" << std::endl;
		m_hitPoints -= amount;
	}
	else
		std::cout << m_name << " is already dead" << std::endl;
	}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(m_hitPoints > 0 && m_energyPoints > 0)
	{
		std::cout << "ClapTrap " << m_name << " just repaired itself, regaining " << amount << " hit points!" << std::endl;
		m_hitPoints += amount;
		m_energyPoints -= 1;
	}	
}