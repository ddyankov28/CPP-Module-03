/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:40:01 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/13 13:08:29 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap("Unknown_clap_name")
{
    _name = "Unknown";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "\033[1;32mDiamondTrap Default constructor called\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name + "_clap_name")
{
    if (name.empty())
        name = "Unknown";
    _name = name;
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "\033[1;32mDiamondTrap Param constructor called\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& instance)
{
    *this = instance;
    std::cout << "\033[1;93mDiamondTrap Copy constructor called\033[0m" << std::endl;
}

DiamondTrap&    DiamondTrap::operator=(const DiamondTrap& instance)
{
    _name = instance._name;
    _hitPoints = instance._hitPoints;
    _energyPoints = instance._energyPoints;
    _attackDamage = instance._attackDamage;
    std::cout << "\033[1;96mDiamondTrap Copy assignment operator called\033[0m" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap()
{ std::cout << "\033[1;31mDiamondTrap Destructor called\033[0m" << std::endl; }

void    DiamondTrap::attack(std::string const &target) 
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "ClapTrap Name is " << ClapTrap::_name << std::endl;
    std::cout << "DiamondTrap Name is " << _name << std::endl;
}