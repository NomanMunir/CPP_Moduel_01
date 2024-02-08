/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:38:31 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/08 13:15:01 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string newType);
		Weapon();
		~Weapon();
		const std::string& getType(void);
		void setType(std::string newType);
};
