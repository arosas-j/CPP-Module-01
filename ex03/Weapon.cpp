/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosas-j <arosas-j@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:41:29 by arosas-j          #+#    #+#             */
/*   Updated: 2024/08/15 17:30:19 by arosas-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	std::cout << this->type << " destroyed" << std::endl;
}

const std::string& Weapon::getType(void)
{	
	return (this->type);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}
