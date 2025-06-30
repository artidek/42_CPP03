/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:09:49 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/30 12:17:23 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	std::string	name = "Robo chicken";
	ClapTrap test(name);

	test.attack("Robo duck");
	std::cout << test << " has " << test.getEnergy() << " energy left\n";
	test.takeDamage(5);
	std::cout << test << " has " << test.getHealth() << " health left\n";
	test.beRepaired(3);
	std::cout << test << " now have " << test.getHealth() << " points of health and " << test.getEnergy() << " energy left\n";
	std::string s_name = "Stronger robo chicken";
	ScavTrap test2(s_name);
	ScavTrap test3(test2);
	test3.attack("Robo duck");
	test3.takeDamage(10);
	std::cout << test3 << " " << test3.getEnergy() << " energy left " << " and " << test3.getHealth() << " health left\n";
	std::string f_name = "Huge robo chicken";
	FragTrap test4(f_name);
	test4.attack("Robo duck");
	test4.takeDamage(20);
	std::cout << test3 << " " << test4.getEnergy() << " energy left " << " and " << test4.getHealth() << " health left\n";
	DiamondTrap dt("Mutant Robo chicken");
	dt.whoAmI();
	dt.attack("Robo duck");
	std::cout << dt << std::endl;
	return 0;
}
