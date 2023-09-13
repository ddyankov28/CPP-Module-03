/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:17:16 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/12 10:40:22 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    a;
    std::cout << "-----------------------------------------" << std::endl;
    ClapTrap    b("Senad");
    std::cout << "-----------------------------------------" << std::endl;
    ClapTrap    c(b);
    std::cout << "-----------------------------------------" << std::endl; 
    ClapTrap    d("Marks");
    std::cout << "-----------------------------------------" << std::endl; 
    ClapTrap    e;
    std::cout << "-----------------------------------------" << std::endl; 
    e = d;
    std::cout << "-----------------------------------------" << std::endl;    

    a.attack("");
    a.attack("a bot");
    a.attack(d.getName());
    a.attack(e.getName());
    a.takeDamage(3);
    a.beRepaired(20);
    std::cout << "Current Energy of ClapTrap "  << a.getName() << " is " << a.getEnergyPoints() << " point(s)!" << std::endl; 
    std:: cout << "Current Health of ClapTrap " << a.getName() << " is " << a.getHitPoints() << " point(s)!" <<  std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    
    for (int i = 0; i < 12; i++)
    {   
        b.attack(d.getName());
        std::cout << "Current Energy of ClapTrap "  << b.getName() << " is " << b.getEnergyPoints() << " point(s)!" << std::endl; 
    }
    std:: cout << "Current Health of ClapTrap " << b.getName() << " is " << b.getHitPoints() << " point(s)!" <<  std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    return 0;  
}