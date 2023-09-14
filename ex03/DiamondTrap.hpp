/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:07:16 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/14 14:10:53 by ddyankov         ###   ########.fr       */
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

        void    attack(std::string const & target);
        void    whoAmI();
};



# endif