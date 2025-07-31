/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:37:47 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/20 15:02:53 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	private:
		std::string	name;
	public:
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &a );
		DiamondTrap&	operator=( const DiamondTrap& a );
		~DiamondTrap( void );
		
		void	attack(std::string name);
		void	whoAmI( void );
};

#endif