/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:49:54 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/06 13:32:42 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->setType(name);
}
const std::string& Weapon::getType() 
{
	return (this->type);
}
void Weapon::setType(std::string type)
{
	this->type = type;
}
