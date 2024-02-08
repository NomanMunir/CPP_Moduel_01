/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:03:08 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/08 13:42:48 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *_wp;
		std::string _name;
	public:
		void attack();
		void setWeapon(Weapon& wp);
		HumanB(std::string name);
		~HumanB();
};
