/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:17:16 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/13 10:43:10 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap    a("SENAD");
    std::cout << "-----------------------------------------" << std::endl;
    ScavTrap    b("Marks");
    std::cout << "-----------------------------------------" << std::endl;
    ScavTrap    c;
    c = b;
    std::cout << "-----------------------------------------" << std::endl;
    
    a.attack("Deyan");
    a.guardGate();
    std::cout << "-----------------------------------------" << std::endl;
    b.guardGate();
    std::cout << "-----------------------------------------" << std::endl;
    for (int i = 0; i < 52; i++)
    {   
        b.attack(a.getName());
        std::cout << "Current Energy of ScavTrap "  << b.getName() << " is " << b.getEnergyPoints() << " point(s)!" << std::endl; 
    }
    b.guardGate();
    std:: cout << "Current Health of ScavTrap " << b.getName() << " is " << b.getHitPoints() << " point(s)!" <<  std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    return 0;
}