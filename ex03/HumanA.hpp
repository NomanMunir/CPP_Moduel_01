/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:57:45 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/06 13:24:53 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon *HumanAWeapon;
	std::string name;
public:
	HumanA(std::string name, Weapon& w);
	~HumanA();
	void attack(void);

};
