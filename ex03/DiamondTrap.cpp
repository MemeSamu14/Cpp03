/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:57:17 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/17 15:03:33 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name), ScavTrap(name),FragTrap(name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
}

DiamondTrap::DiamondTrap( const DiamondTrap& a ): ClapTrap(a), ScavTrap(a),FragTrap(a)
{
	this->name = a.name;
	ClapTrap::name = a.name + "_clap_name";
	ScavTrap::energyPoints = a.getEnergyPoints();
	FragTrap::hitPoints = a.getHitPoints();
	FragTrap::attackDamage = a.getAttackDamage();
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& a )
{
	this->name = a.name;
	ClapTrap::name = a.name + "_clap_name";
	ScavTrap::energyPoints = a.getEnergyPoints();
	FragTrap::hitPoints = a.getHitPoints();
	FragTrap::attackDamage = a.getAttackDamage();
	return (*this);
}

DiamondTrap::~DiamondTrap( void )
{
	return ;
}


void	DiamondTrap::attack( std::string name )
{
	ScavTrap::attack(name);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "Hi, i'm     name: " << this->name << std::endl
	<< "Hi, i'm clapName: " << ClapTrap::name << std::endl;
	return ;
}