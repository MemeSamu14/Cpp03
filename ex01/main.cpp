/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:41:05 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/16 17:12:42 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	a( "Samir");

	// for (int i = 0; i < 51; i++)
		// a.attack("tua mamma");
	// a.guardGate();

	a.beRepaired(2);
	a.takeDamage(2);
	
	return (0);
}