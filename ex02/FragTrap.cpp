/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:41:35 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/17 12:43:11 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "constructed with FragTrap" << std::endl;
	this->setName( name );
	this->setHitPoints( 100 );
	this->setEnergyPoints( 100 );
	this->setAttackDamage( 30 );
	return ;
}

FragTrap::FragTrap( const FragTrap& a ): ClapTrap(a)
{
	this->setName(a.getName());
	this->setEnergyPoints(a.getEnergyPoints());
	this->setAttackDamage(a.getAttackDamage());
	this->setHitPoints(a.getHitPoints());
	return ;
}

FragTrap&	FragTrap::operator=( FragTrap& a)
{
	this->setName(a.getName());
	this->setEnergyPoints(a.getEnergyPoints());
	this->setAttackDamage(a.getAttackDamage());
	this->setHitPoints(a.getHitPoints());
	return *this;
}

FragTrap::~FragTrap( void )
{
	std::cout <<"Destroyed by FragTrap"<< std::endl;
	return ;
}

void FragTrap::highFivesGuys( void )
{
	if (this->getEnergyPoints() > 0)
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "positive high-five" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->getName() << " is out of energy" << std::endl;

}

