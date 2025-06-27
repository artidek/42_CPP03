/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 10:18:29 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/27 12:25:47 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <ostream>

class ClapTrap
{
protected:
	std::string _name;
	int	_health;
	int	_energy;
	int	_damage;

public:
	ClapTrap(void);
	ClapTrap(std::string &name);
	ClapTrap (ClapTrap &copy);
	ClapTrap& operator=(ClapTrap &copy);
	virtual ~ClapTrap();



	std::string getName(void) const;
	int	getHealth(void) const;
	int getEnergy(void) const;
	int getDamage(void) const;
	void setName(std::string &name);

	void attack (const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream& o, ClapTrap& cl);

#endif
