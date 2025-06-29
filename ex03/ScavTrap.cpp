/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:55:55 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/29 21:25:17 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(ScavTrap& copy)
{
	if (this != &copy)
	{
		this->_name = copy.getName();
		this->_damage = copy.getDamage();
		this->_energy = copy.getEnergy();
		this->_health = copy.getHealth();
	}
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap ";
	ClapTrap::attack(target);
}

void	ScavTrap::guardGate(void)
{
	std::cout << _name << " is now in gate keeper mode\n";
}

std::ostream& operator<<(std::ostream& o, ScavTrap& cl)
{
	o << cl.getName();
	return o;
}
