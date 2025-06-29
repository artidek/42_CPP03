/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:48:34 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/29 21:24:56 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
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
