#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "FragTrap created (void constructor) : " << name << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "FragTrap created (name constructor) : " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &f) {
	this->name = f.name;
	this->hp = f.hp;
	this->energy = f.energy;
	this->damage = f.damage;
	std::cout << this->name <<" created (assignment constructor)" << std::endl;

}

FragTrap::~FragTrap() { std::cout << "FragTrap " << name << " destroyed" << std::endl; }

FragTrap &FragTrap::operator=(FragTrap &c) {
	this->name = c.name;
	this->hp = c.hp;
	this->energy = c.energy;
	this->damage = c.damage;
	std::cout << "FragTrap assigned" << std::endl;
	return (*this);
}

void FragTrap::attack(const std::string &target) {
	if (notAble("attack"))
		return ;
	energy--;
	std::cout << "FragTrap " << name << " attacks " << target << " for " << damage;
	dispStatus();
}

void FragTrap::highFivesGuys(void) {
	if (notAble("high five"))
		return ;
	std::cout << "FragTrap " << name << " begs for a high five" << std::endl;
}