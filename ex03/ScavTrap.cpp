#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "ScavTrap created (void constructor) : " << name << std::endl;
}
ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "ScavTrap created (name constructor) : " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &c) {
	this->name = c.name;
	this->hp = c.hp;
	this->energy = c.energy;
	this->damage = c.damage;
	std::cout << this->name <<" created (assignment constructor)" << std::endl;
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap " << name << " destroyed" << std::endl; }

ScavTrap &ScavTrap::operator=(ScavTrap &c) {
	this->name = c.name;
	this->hp = c.hp;
	this->energy = c.energy;
	this->damage = c.damage;
	std::cout << "ScavTrap assigned" << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string &target) {
	if (notAble("attack"))
		return ;
	energy--;
	std::cout << "ScavTrap " << name << " attacks " << target << " for " << damage;
	dispStatus();
}

void ScavTrap::guardGate(void) {
	if (notAble("guard any gate"))
		return ;
	std::cout << "ScavTrap " << name << " is now in in Gate keeper mode." << std::endl;
}