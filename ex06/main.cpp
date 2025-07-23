/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosas-j <arosas-j@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:33:47 by arosas-j          #+#    #+#             */
/*   Updated: 2024/08/07 16:56:21 by arosas-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	harl_switch(int	complain, Harl& entitled_person)
{
	switch (complain)
	{
		case 0:
			entitled_person.complain("DEBUG");
		case 1:
			entitled_person.complain("INFO");
		case 2:
			entitled_person.complain("WARNING");
		case 3:
			entitled_person.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]";
			std::cout << std::endl;
	}
}

int	main(int argc, char **argv)
{
	Harl 		entitled_person;
	int			complain;
	std::string complains[] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]";
		std::cout << std::endl;
		return (0);
	}
	for (complain = 0; complain < 4; complain++)
	{
		if (complains[complain] == argv[1])
			break ;
	}
	harl_switch(complain, entitled_person);
	return (0);
}