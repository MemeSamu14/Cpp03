/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:46:07 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/17 12:10:18 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name )
{
	std::cout << "Created with ClapTrap" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destroyed by ClapTrap" << std::endl;
	return ;
}

void	ClapTrap::attack( const std::string& target)
{
	if (this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name 
		<< " attacks " 
		<< target
		<< " causing "
		<< this->attackDamage
		<< " points of damage!"
		<< std::endl;
		
	}
	else
		std::cout << "ClapTrap " << this->name << " is out of energy" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->name 
	<< " take " 
	<< amount
	<< " points of damage!"
	<< std::endl;
	this->hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount)
{
		if (this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name
		<< " repaired himself by " 
		<< amount
		<< " points "
		<< std::endl;
		this->hitPoints += amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " is out of energy" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& a )
{
	this->name = a.name;
	this->hitPoints = a.hitPoints;
	this->energyPoints = a.energyPoints;
	this->attackDamage = a.attackDamage;
	return ;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& a)
{
	this->name = a.name;
	this->hitPoints = a.hitPoints;
	this->energyPoints = a.energyPoints;
	this->attackDamage = a.attackDamage;
	return *this;
}

// getters
std::string	ClapTrap::getName( void ) const
{
	return (this->name);
}

int		ClapTrap::getHitPoints( void ) const
{
	return (this->hitPoints);
}

int		ClapTrap::getEnergyPoints( void ) const
{
	return (this->energyPoints);
}

int		ClapTrap::getAttackDamage( void ) const
{
	return (this->attackDamage);
}

void	ClapTrap::setName( std::string	name)
{
	this->name = name;
}

void	ClapTrap::setHitPoints( int hitPoints )
{
	this->hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints( int energyPoints )
{
	this->energyPoints = energyPoints;
}
void	ClapTrap::setAttackDamage( int attackDamage )
{
	this->attackDamage = attackDamage;
}