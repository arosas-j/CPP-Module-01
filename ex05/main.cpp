/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosas-j <arosas-j@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:33:47 by arosas-j          #+#    #+#             */
/*   Updated: 2024/08/07 15:28:39 by arosas-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl entitled_person;

	entitled_person.complain("DEBUG");
	entitled_person.complain("INFO");
	entitled_person.complain("WARNING");
	entitled_person.complain("ERROR");
	entitled_person.complain("another complain");
	return (0);
}