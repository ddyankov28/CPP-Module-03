/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:07:16 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/13 14:55:10 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();  //default constructor
        DiamondTrap(std::string name); // param constructor
        DiamondTrap(const DiamondTrap& instance); // copy constructor
        DiamondTrap&    operator=(const DiamondTrap& instance); // copy assign oper
        ~DiamondTrap(); //destructor

        void    attack(std::string& target);
        void    whoAmI();
};



# endif