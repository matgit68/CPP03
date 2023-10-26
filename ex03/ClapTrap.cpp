#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	this->name = "John Doe";
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
	std::cout << "ClapTrap created (void constructor) : " << this->name <<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
	std::cout << "ClapTrap created (name constructor) : " << this->name <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c) {
	this->name = c.name;
	this->hp = c.hp;
	this->energy = c.energy;
	this->damage = c.damage;
	std::cout << this->name <<" created (assignment constructor)" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->name << " destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &c) {
	this->name = c.name;
	this->hp = c.hp;
	this->energy = c.energy;
	this->damage = c.damage;
	std::cout << "ClapTrap assigned" << std::endl;
	return (*this);
}

void ClapTrap::dispStatus(void) {
	std::cout << " (remaining : HP[" << hp << "] Energy["<< energy << "])" << std::endl;
}

bool ClapTrap::notAble(const std::string action) {
	if (hp <= 0) {
		std::cout << name << " is dead and cannot " << action << std::endl;
		return (true);
	}
	if (energy <= 0) {
		std::cout << name << " doesn't have enough energy to " << action << std::endl;
		return (true);
	}
	return (false);
}

void ClapTrap::attack(const std::string &target) {
	if (notAble("attack"))
		return ;
	energy--;
	std::cout << "ClapTrap " << name << " attacks " << target << " for " << damage;
	dispStatus();
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (notAble("repair"))
		return ;
	energy--;
	hp += amount;
	std::cout << name << " repairs " << amount << " damage";
	dispStatus();
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hp <= 0) {
		std::cout << name << " is dead and cannot take more damage" << std::endl;
		return ;
	}
	hp -= amount;
	std::cout << name << " takes " << amount << " damage";
	if (hp <= 0)
		std::cout << " and " << RED << "dies" << RESET << std::endl;
	else
		dispStatus();
}