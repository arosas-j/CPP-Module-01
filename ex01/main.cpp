/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosas-j <arosas-j@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:53:11 by arosas-j          #+#    #+#             */
/*   Updated: 2024/08/15 17:19:45 by arosas-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*horde;
	int		zombieAmount = 6;

	horde = zombieHorde(zombieAmount, "Brain enjoyer");
	if (horde == NULL)
		return (0);
	horde[0].set_name("Paco");
	horde[5].set_name("Pepe");
	for (int i = 0; i < zombieAmount; ++i)
		horde[i].announce();
	delete[] horde;
	return (0);
}