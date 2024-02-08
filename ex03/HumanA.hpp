/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:55:38 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/08 13:31:16 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon& _wp;

	public:
		HumanA(std::string name, Weapon& wp);
		~HumanA();
		void attack();
};
