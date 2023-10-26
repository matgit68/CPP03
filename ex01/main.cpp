#include "ScavTrap.hpp"

int main(void) {
	ScavTrap a("Scavy");
	ScavTrap b;
	b = a;

	b.attack("Toto");
	b.attack("Toto");
	b.attack("Toto");
	b.attack("Toto");
	b.beRepaired(10);
	b.beRepaired(1);
	b.beRepaired(7);
	b.attack("Toto");
	b.takeDamage(100);
	b.beRepaired(150);
	b.guardGate();
	b.attack("Bidule");
	b.takeDamage(500);
	b.attack("Bidule");
	b.guardGate();
	return (0);
}