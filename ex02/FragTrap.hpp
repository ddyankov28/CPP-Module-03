/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:25:36 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/13 09:41:53 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(); // default constructor
        FragTrap(std::string name); // param constructor
        FragTrap(const FragTrap& istance); // copy constructor
        FragTrap&   operator=(const FragTrap& instance); // copy assign oper
        ~FragTrap(); // destructor

        void    highFivesGuys();
};  

# endif