/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:18:05 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/06 17:10:21 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

	arrayFcn[0] = &Harl::debug;
	arrayFcn[1] = &Harl::info;
	arrayFcn[2] = &Harl::warning;
	arrayFcn[3] = &Harl::error;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}
Harl::~Harl()
{
}
void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; ++i)
	{
		if (level == levels[i])
		{
			(this->*arrayFcn[i])();
			return;
		}
	}
	std::cout << "Unknown level: " << level << std::endl;
}

void Harl::debug(void)
{
	std::cout << "DEBUG" << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "INFO I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "WARNING" << " I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "ERROR " << "This is unacceptable! I want to speak to the manager now." << std::endl;
}