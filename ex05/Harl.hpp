/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:11:17 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/08 17:36:49 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl
{
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void (Harl::*array[4])(void);
	public:
	void complain( std::string level );
		Harl();
		~Harl();
};