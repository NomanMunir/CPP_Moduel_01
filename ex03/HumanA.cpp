/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:57:49 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/06 13:24:45 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w)
{
	this->name = name;
	this->HumanAWeapon = &w;
}
HumanA::~HumanA()
{
	std::cout << "Destructor is called" << std::endl;
}
void HumanA::attack(void)
{
	std::cout << this->name << " attcks with their ";
	std::cout << this->HumanAWeapon->getType() << std::endl;
}
