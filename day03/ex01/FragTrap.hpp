#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <fstream>
# include "Robot.hpp"

class	FragTrap : public Robot
{
	private:
	void		(*_f[5])(FragTrap &attacker, std::string const &target);
	static void	attackRandom0(FragTrap &attacker, std::string const &target);
	static void	attackRandom1(FragTrap &attacker, std::string const &target);
	static void	attackRandom2(FragTrap &attacker, std::string const &target);
	static void	attackRandom3(FragTrap &attacker, std::string const &target);
	static void	attackRandom4(FragTrap &attacker, std::string const &target);

	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &copy);
	~FragTrap();
	FragTrap&	operator=(FragTrap const &rhs);	

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		vaulthunter_dot_exe(std::string const &target);
	
};

#endif
