/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:41:35 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/17 12:04:53 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <iomanip>
#include <ios>

class ClapTrap
{
	private:
		// name, hit points, energy points, attack damage
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	protected:
		void		setName( std::string name );
		void		setHitPoints( int hitPoints );
		void		setEnergyPoints( int energyPoints );
		void		setAttackDamage( int attackDamage );
		std::string	getName( void ) const;
		int			getHitPoints( void ) const;
		int			getEnergyPoints( void ) const;
		int			getAttackDamage( void ) const;
	public:
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& a );
		ClapTrap&	operator=( const ClapTrap& a );
		//copy construtor
		//operatore di copia
		~ClapTrap( void );
		//	actions
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};


#endif