/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:15:55 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/06 17:05:47 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl
{
public:
	Harl();
	~Harl();
	void complain(std::string level);
private:
	typedef void (Harl::*ptrFcn)();
	ptrFcn arrayFcn[4];
	std::string levels[4];
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};