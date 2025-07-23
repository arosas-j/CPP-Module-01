/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosas-j <arosas-j@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:32:52 by arosas-j          #+#    #+#             */
/*   Updated: 2024/08/15 17:54:48 by arosas-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "[ Oh, Harl is here. Nice... ]" << std::endl;
}

Harl::~Harl()
{
	std::cout << "[ Finally, he left. ]" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've ";
	std::cout << "been coming for years whereas you started working here ";
	std::cout << "since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! ";
	std::cout << "I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int	i;
	void (Harl::*complaints[])(void) =
	{
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
	std::string	levels[] =
	{
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*complaints[i])();
			return ;
		}
	}
	std::cout << "*More stupid complains*" << std::endl;
}
