/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosas-j <arosas-j@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:24:40 by arosas-j          #+#    #+#             */
/*   Updated: 2024/08/15 17:36:02 by arosas-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL)
{
	this->_name = name;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " is dead!" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with their ";
		std::cout << this->_weapon->getType() << std::endl;
	}
	else
		std::cout << this->_name << " doesn't have a weapon" << std::endl;
}