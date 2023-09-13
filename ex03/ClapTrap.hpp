/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:09:04 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/12 16:09:13 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class   ClapTrap
{
    protected:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;
    public:
        ClapTrap();                           // default constructor
        ClapTrap(std::string name);           // constructor with parameter
        ClapTrap(const ClapTrap& instance);   // copy constructor
        ClapTrap& operator=(const ClapTrap& instance); // assign operator
        ~ClapTrap();                            //destruct
        
         void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        bool        checkResources();
        int         getHitPoints();
        int         getEnergyPoints();
        std::string getName(); 
};

# endif