/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:11:17 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/08 17:50:36 by nmunir           ###   ########.fr       */
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
	public:
	void complain( std::string level );
		Harl();
		~Harl();
};