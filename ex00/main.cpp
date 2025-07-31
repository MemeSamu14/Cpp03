/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:41:05 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/16 11:11:07 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap a("Samir");

	a.attack("lezzo");
	a.takeDamage(5);
	a.beRepaired(5);

	for (int i = 0; i < 20; i++)
		a.attack("tua mamma");
	return (0);
}