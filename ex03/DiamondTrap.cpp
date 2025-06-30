/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 19:05:42 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/30 12:28:23 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("diamond_clap_name"), ScavTrap(), FragTrap()
{
	this->_energy = ScavTrap::_defaultEnergy;
	this->_damage = FragTrap::_defaultDamage;
	this->_health = FragTrap::_defaultHealth;
	std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(const std::string &name) :  ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	this->_energy = ScavTrap::_defaultEnergy;
	this->_damage = FragTrap::_defaultDamage;
	this->_health = FragTrap::_defaultHealth;
	std::cout << "DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy.getName())
{
	std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &copy)
{
	if (this != &copy)
	{
		this->_name = copy.getName();
		this->_damage = copy.getDamage();
		this->_health = copy.getHealth();
		this->_energy = copy.getEnergy();
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called\n";
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->_name << " and " << ClapTrap::_name << std::endl;
}

std::string	DiamondTrap::getMyName(void) {return this->_name;};

std::ostream &operator<<(std::ostream &o, DiamondTrap &dt)
{
	o << dt.getMyName() << "[health: " << dt.getHealth() << " damage: " << dt.getDamage() << " energy: " << dt.getEnergy() << "]";
	return o;
}
