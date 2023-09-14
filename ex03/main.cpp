/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:09:28 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/14 14:15:10 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap b("Deyan");
    b.whoAmI();
    std::cout << "------------------------" << std::endl;
    DiamondTrap c;
    std::cout << "------------------------" << std::endl;
    c.whoAmI();
    std::cout << "------------------------" << std::endl;
    c.attack("Michael Perger");
    std::cout << "------------------------" << std::endl;
    c.highFivesGuys();
    std::cout << "------------------------" << std::endl;
    return 0;
}
