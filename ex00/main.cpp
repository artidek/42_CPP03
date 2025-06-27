/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:09:49 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/27 12:28:20 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
}
