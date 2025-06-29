/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 18:06:25 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/29 21:09:46 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called\n";
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called\n";
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called\n";
}

FragTrap& FragTrap::operator=(FragTrap& copy)
{
	if (this != &copy)
	{
		this->_damage = copy.getDamage();
		this->_health = copy.getHealth();
		this->_energy = copy.getEnergy();
		this->_name = copy.getName();
	}
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys! High five!";
}

std::ostream& operator<<(std::ostream& o, FragTrap& cl)
{
	o << cl.getName();
	return o;
}