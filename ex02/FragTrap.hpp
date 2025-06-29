/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 18:01:31 by aobshatk          #+#    #+#             */
/*   Updated: 2025/06/29 18:20:43 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string& name);
	FragTrap(FragTrap& copy);
	FragTrap& operator=(FragTrap& copy);
	virtual ~FragTrap(void);
	void highFivesGuys(void);
};

std::ostream& operator<<(std::ostream& o, FragTrap& st);

#endif
