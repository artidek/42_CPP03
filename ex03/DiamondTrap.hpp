/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 18:57:19 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/30 12:25:08 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap
{
  private:
	std::string _name;

  public:
	DiamondTrap(void);
	DiamondTrap(const std::string &name);
	DiamondTrap(DiamondTrap &copy);
	DiamondTrap &operator=(DiamondTrap &copy);
	virtual ~DiamondTrap();
	using ScavTrap::attack;
	void whoAmI(void);
	std::string getMyName(void);
};

std::ostream& operator<<(std::ostream& o, DiamondTrap& dt);

#endif
