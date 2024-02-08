/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:37:02 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/08 12:34:57 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		void announce(void);
		~Zombie();
};

Zombie 	*newZombie(std::string name);
void 	randomChump(std::string name);
