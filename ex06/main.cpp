/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:14:27 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/06 17:27:57 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **arg)
{
	Harl h;
	if (ac != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	h.complain(arg[1]);
	
}
