/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 10:40:54 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/29 21:24:46 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _health(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _health(10), _energy(10),
	_damage(0)
{
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	*this = copy;
	std::cout << "ClapTrap copy constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap &copy)
{
	if (this != &copy)
	{
		this->_name = copy.getName();
		this->_energy = copy.getEnergy();
		this->_health = copy.getHealth();
		this->_damage = copy.getDamage();
	}
	return (*this);
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

int ClapTrap::getHealth(void) const
{
	return (this->_health);
}

int ClapTrap::getEnergy(void) const
{
	return (this->_energy);
}

int ClapTrap::getDamage(void) const
{
	return (this->_damage);
}

void ClapTrap::setName(std::string &name)
{
	this->_name = name;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_health > 0)
	{
		if (!(this->_name.empty()))
			std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_damage << " points of damage " << std::endl;
		else
			std::cout << "ClapTrap "
						<< "Anonimous attacks " << target << " causing " << this->_damage << " points of damage " << std::endl;
		this->_energy -= 1;
	}
	else if (this->_energy <= 0)
		std::cout << "Not enough energy to attack\n";
	else if (this->_health <= 0)
		std::cout << "Not enought health\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage\n";
	this->_health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_health > 0)
	{
		if (!(this->_name.empty()))
			std::cout << "ClapTrap " << this->_name << " is repairing " << amount << " points of health " << std::endl;
		else
			std::cout << "ClapTrap "
						<< "Anonimous is repairing " << amount << " points of health " << std::endl;
		this->_energy -= 1;
	}
	else if (this->_energy <= 0)
		std::cout << "Not enough energy to attack\n";
	else if (this->_health <= 0)
		std::cout << "Not enought health\n";
}

std::ostream &operator<<(std::ostream &o, ClapTrap &cl)
{
	o << cl.getName();
	return (o);
}
