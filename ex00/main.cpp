#include "ClapTrap.hpp"

int main(void) {
	ClapTrap a("Clappy");
	ClapTrap b("Trappy");
	ClapTrap c(b);
	ClapTrap d = a;
	ClapTrap e;

	e = a;

	b.attack("Toto");
	b.attack("Toto");
	b.attack("Toto");
	b.attack("Toto");
	b.beRepaired(10);
	b.beRepaired(1);
	b.beRepaired(7);
	b.beRepaired(7);
	b.beRepaired(7);
	b.beRepaired(7);
	b.attack("Toto");
	b.takeDamage(100);
	b.beRepaired(150);
	b.takeDamage(100);
	return (0);
}