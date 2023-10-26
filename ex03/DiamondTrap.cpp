#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap() {
	name = "DiamondTrap";
	ClapTrap::name = name + "_clap_name";
	hp = FragTrap::hp;
	energy = ScavTrap::energy;
	damage = FragTrap::damage;
	std::cout << "DiamTrap created (void constructor) : " <<  this->name << std::endl;

}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n), FragTrap(n), ScavTrap(n) {
	name = n;
	ClapTrap::name = n + "_clap_name";
	hp = FragTrap::hp;
	energy = ScavTrap::energy;
	damage = FragTrap::damage;
	std::cout << "DiamTrap created (name constructor) : " <<  this->name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &d) {
	DiamondTrap::name = d.name;
	ClapTrap::name = d.name + "_clap_name";
	hp = d.hp;
	energy = d.energy;
	damage = d.damage;
	std::cout << "DiamTrap created (copy constructor) : " <<  this->name << std::endl;
}

DiamondTrap::~DiamondTrap() { std::cout << "DiamondTrap destroyed : " << name << std::endl; }

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &d) {
	name = d.name;
	ClapTrap::name = d.name + "_clap_name";
	hp = d.hp;
	energy = d.energy;
	damage = d.damage;
	std::cout << "DiamTrap assigned : " <<  this->name << std::endl;
	return (*this);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "My DiamTrap name : " << name << std::endl;
	std::cout << "My ClapTrap name : " << ClapTrap::name << std::endl;
}

// void DiamondTrap::attack(const std::string &target) { ScavTrap::attack(target); }
