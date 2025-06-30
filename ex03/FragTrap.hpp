/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 18:01:31 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/30 12:16:11 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
protected:
	static int const _defaultHealth = 100;
	static int const _defaultEnergy = 100;
	static int const _defaultDamage = 30;
public:
	FragTrap(void);
	FragTrap(const std::string& name);
	FragTrap(FragTrap& copy);
	FragTrap& operator=(FragTrap& copy);
	virtual ~FragTrap(void);
	void highFivesGuys(void);
};

std::ostream& operator<<(std::ostream& o, FragTrap& st);

#endif
