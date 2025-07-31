/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:21:17 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/17 12:08:31 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
	std::cout << "Created with ScavTrap" << std::endl;
	this->setEnergyPoints( 50 );
	this->setAttackDamage( 20 );
	this->setHitPoints( 100 );
	return ;
}

ScavTrap::ScavTrap( const ScavTrap& a ) : ClapTrap(a)
{
	this->setName(a.getName());
	this->setEnergyPoints(a.getEnergyPoints());
	this->setAttackDamage(a.getAttackDamage());
	this->setHitPoints(a.getHitPoints());
	return ;
}

ScavTrap&	ScavTrap::operator=( ScavTrap& a)
{
	this->setName(a.getName());
	this->setEnergyPoints(a.getEnergyPoints());
	this->setAttackDamage(a.getAttackDamage());
	this->setHitPoints(a.getHitPoints());
	return *this;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destroyed by ScavTrap" << std::endl;
	return ;
}

void	ScavTrap::guardGate( void )
{
	std::cout << this->getName() << "  is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() > 0)
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "ScavTrap " << this->getName() 
		<< " attacks " 
		<< target
		<< " causing "
		<< this->getAttackDamage()
		<< " points of damage!"
		<< std::endl;
	}
	else
		std::cout << "ScavTrap " << this->getName() << " is out of energy" << std::endl;
}
