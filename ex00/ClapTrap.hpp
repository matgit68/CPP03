#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define BOLD	 "\033[1m"
# define BLACK	 "\033[30;1m"
# define RED	 "\033[31;1m"
# define GREEN	 "\033[32;1m"
# define YELLOW	 "\033[33;1m"
# define BLUE	 "\033[34;1m"
# define MAGENTA "\033[35;1m"
# define CYAN	 "\033[36;1m"
# define WHITE	 "\033[37;1m"
# define RESET	 "\033[0m"

# include <iostream>

class ClapTrap
{
private:
	std::string name;
	int	hp;
	int	energy;
	int damage;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &c);
	~ClapTrap();

	ClapTrap &operator=(ClapTrap &c);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void decreaseEnergy(void);
	bool notAble(std::string action);
	void dispStatus(void);
};

#endif