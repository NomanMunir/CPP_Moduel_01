/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:58:10 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/06 13:55:11 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->HumanBWeapon = NULL;
}
HumanB::~HumanB()
{
	std::cout << "Destructor is called" << std::endl;
}
void HumanB::attack(void)
{
	std::cout << this->name << " attcks with their ";
	if (this->HumanBWeapon)
		std::cout << this->HumanBWeapon->getType();
	 std::cout << std::endl;
}

void HumanB::setWeapon(Weapon& w)
{
	this->HumanBWeapon = &w;
}