/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:37:02 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/08 10:57:05 by nmunir           ###   ########.fr       */
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
	void setName(std::string name);
	~Zombie();
	Zombie();
};

Zombie* zombieHorde( int N, std::string name );
