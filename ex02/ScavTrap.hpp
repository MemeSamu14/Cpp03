/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:41:35 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/20 15:02:23 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <iomanip>
#include <ios>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		// name, hit points, energy points, attack damage
		// std::string	name;
		// int			hitPoints;
		// int			energyPoints;
		// int			attackDamage;
	public:
		ScavTrap( std::string name );
		ScavTrap ( const ScavTrap&	a );
		ScavTrap&	operator=(ScavTrap& a);
		~ScavTrap( void );
		//	actions
		void	attack(const std::string& target);
		// void	takeDamage(unsigned int amount);
		// void	beRepaired(unsigned int amount);
		void	guardGate( void );

};


#endif