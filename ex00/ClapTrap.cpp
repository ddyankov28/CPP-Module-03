/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:17:37 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/13 14:21:31 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{ std::cout << "\033[1;32mClapTrap Default constructor called\033[0m" << std::endl; }

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{ 
    if (name.empty())
        _name = "Unknown";
    std::cout << "\033[1;32mClapTrap Param constructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& instance)
{ 
    *this = instance; 
    std::cout << "\033[1;93mClapTrap Copy constructor called\033[0m" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& instance)
{
    _name = instance._name;
    _hitPoints = instance._hitPoints;
    _energyPoints = instance._energyPoints;
    _attackDamage = instance._attackDamage;
    std::cout << "\033[1;96mClapTrap Copy assignment operator called\033[0m" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{ std::cout << "\033[1;31mClaptrap Destructor called\033[0m" << std::endl; }

void    ClapTrap::attack(const std::string& target)
{
    if (!checkResources())
        return ;
    if (target.empty())
        std::cout << "ClapTrap " << _name << " attacks unknown target causing " << _attackDamage << " points of damage!" << std::endl;
    else
        std::cout << "ClapTrap " << _name << " attacks " << target  << " causing " << _attackDamage << " points of damage!" << std::endl;  
    _energyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (!checkResources())
        return ;
    std::cout << "ClapTrap " << _name << " took " << amount << " damage" << std::endl;
    _hitPoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!checkResources())
        return ;
    std::cout << "ClapTrap " << _name << " is repaired with " << amount << " points" << std::endl;
    _energyPoints--;
    _hitPoints += amount;
}


bool    ClapTrap::checkResources()
{
    if (_hitPoints < 1 || _energyPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " doesn't have enough health or energy" << std::endl;
        return false;
    }
    return true;
}

int ClapTrap::getHitPoints()
{ return _hitPoints; }

int ClapTrap::getEnergyPoints()
{ return _energyPoints; }

std::string ClapTrap::getName()
{ return _name; }