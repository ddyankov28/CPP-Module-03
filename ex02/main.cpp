/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:09:28 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/14 14:06:16 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap    a("Senad");
    std::cout << "-----------------------------------------" << std::endl;
    FragTrap    c(a);
    FragTrap    b("Marks");
    std::cout << "-----------------------------------------" << std::endl;
    for (int i = 0; i < 101; i++)
    {
        std::cout << i << std::endl;
        a.highFivesGuys();
        a.attack("bot");
    }
    
    a.highFivesGuys();
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "Current Energy of ScavTrap "  << a.getName() << " is " << a.getEnergyPoints() << " point(s)!" << std::endl; 
    std:: cout << "Current Health of ScavTrap " << a.getName() << " is " << a.getHitPoints() << " point(s)!" <<  std::endl;

    ScavTrap e;
    e.attack("bot");
    return 0;
}