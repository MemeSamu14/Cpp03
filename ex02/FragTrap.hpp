/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:41:35 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/17 12:40:28 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <iomanip>
#include <ios>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:
		// name, hit points, energy points, attack damage
		// std::string	name;
		// int			hitPoints;
		// int			energyPoints;
		// int			attackDamage;
	public:
		FragTrap( std::string name );
		FragTrap( const FragTrap& a );
		FragTrap&	operator=( FragTrap& a );
		~FragTrap( void );
		//	actions
		void	attack(const std::string& target);
		// void	takeDamage(unsigned int amount);
		// void	beRepaired(unsigned int amount);
		void highFivesGuys( void );


};


#endif