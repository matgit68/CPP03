#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name;

public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &d);
	~DiamondTrap();

	DiamondTrap &operator=(const DiamondTrap &d);
	
	using ScavTrap::attack;
	// void attack(const std::string &target);
	void whoAmI(void);
};

#endif