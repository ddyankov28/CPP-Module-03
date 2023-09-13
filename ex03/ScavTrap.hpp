/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:10:22 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/13 09:24:14 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(); // default constructor
        ScavTrap(std::string name); // param constructor
        ScavTrap(const ScavTrap& instance); // copy constructor
        ScavTrap&   operator=(const ScavTrap& instance); // copy assign oper
        ~ScavTrap(); // destructor
        
        void    attack(const std::string& target);
        void    guardGate();       
};

#endif