/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:27:38 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/13 14:23:33 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _name = "Unknown";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "\033[1;32mScavTrap Default constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    if (name.empty())
        _name = "Unknown";
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "\033[1;32mScavTrap Param constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& instance)
{
    *this = instance;
    std::cout << "\033[1;93mScavTrap Copy constructor called\033[0m" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& instance)
{
    _name = instance._name;
    _hitPoints = instance._hitPoints;
    _energyPoints = instance._energyPoints;
    _attackDamage = instance._attackDamage;
    std::cout << "\033[1;96mScavTrap Copy assignment operator called\033[0m" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{ std::cout << "\033[1;31mScavTrap Destructor called\033[0m" << std::endl; }


void    ScavTrap::attack(const std::string& target)
{
    if (!checkResources())
        return ;
    if (target.empty())
        std::cout << "ScavTrap " << _name << " attacks unknown target causing " << _attackDamage << " points of damage!" << std::endl;
    else
        std::cout << "ScavTrap " << _name << " attacks " << target  << " causing " << _attackDamage << " points of damage!" << std::endl;  
    _energyPoints--;
}

void    ScavTrap::guardGate()
{
    if (!checkResources())
        return ;
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl; 
}