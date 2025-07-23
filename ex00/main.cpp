/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosas-j <arosas-j@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:53:11 by arosas-j          #+#    #+#             */
/*   Updated: 2024/08/15 17:15:53 by arosas-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);

void	randomChump(std::string name);

int	main(void)
{
	Zombie *zombie = newZombie("Pointer Zombie");
	//Zombie *undead = newZombie("Bad Pointer Zombie");
	randomChump("Temporal Zombie");
	zombie->announce();
	//undead->announce();
	delete zombie;
	return (0);
}