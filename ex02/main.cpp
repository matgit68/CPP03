#include "FragTrap.hpp"

int main(void) {
	FragTrap a("Fraggy");
	FragTrap b("Fragger");

	b.attack("Toto");
	b.attack("Toto");
	b.attack("Toto");
	b.attack("Toto");
	b.beRepaired(10);
	b.beRepaired(1);
	b.beRepaired(7);
	b.attack("Toto");
	b.takeDamage(150);
	b.beRepaired(150);
	b.attack("Bidule");
	b.takeDamage(0);
	b.highFivesGuys();
	a.highFivesGuys();
	return (0);
}