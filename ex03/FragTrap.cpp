/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:29:29 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/13 14:28:46 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _name = "Unknown";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "\033[1;32mFragTrap Default constructor called\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    if (name.empty())
        _name = "Unknown";
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "\033[1;32mFragTrap Param constructor called\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& instance)
{
    *this = instance;
    std::cout << "\033[1;93mFragTrap Copy constructor called\033[0m" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& instance)
{
    _name = instance._name;
    _hitPoints = instance._hitPoints;
    _energyPoints = instance._energyPoints;
    _attackDamage = instance._attackDamage;
    std::cout << "\033[1;96mFragTrap Copy assignment operator called\033[0m" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{ std::cout << "\033[1;31mFragTrap Destructor called\033[0m" << std::endl; }

void    FragTrap::highFivesGuys()
{
    if (!checkResources())
        return ;
    std::cout << "FragTrap " << _name << " requested high Fives!" << std::endl;
}