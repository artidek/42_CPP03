/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:48:34 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/30 12:16:01 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
protected:
	static int const _defaultHealth = 100;
	static int const _defaultEnergy = 50;
	static int const _defaultDamage = 20;
public:
	ScavTrap(void);
	ScavTrap(const std::string& name);
	ScavTrap(ScavTrap& copy);
	ScavTrap& operator=(ScavTrap& copy);
	virtual ~ScavTrap();
	virtual void	attack (const std::string& target);
	void	guardGate(void);
};

std::ostream& operator<<(std::ostream& o, ScavTrap& st);

#endif
