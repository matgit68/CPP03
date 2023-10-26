#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap a("Diams");
	std::cout << "-----------------------------------------------------" << std::endl;
	DiamondTrap b;
	std::cout << "-----------------------------------------------------" << std::endl;
	DiamondTrap c(a);
	std::cout << "-----------------------------------------------------" << std::endl;

	b.whoAmI();
	std::cout << "-----------------------------------------------------" << std::endl;
	b = a;
	std::cout << "-----------------------------------------------------" << std::endl;
	b.whoAmI();
	std::cout << "-----------------------------------------------------" << std::endl;
	c.whoAmI();
	std::cout << "-----------------------------------------------------" << std::endl;
	a.attack("titi");
	a.highFivesGuys();
	a.guardGate();
	a.takeDamage(100);
	a.guardGate();
	return (0);
}