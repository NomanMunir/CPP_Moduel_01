/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:24:48 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/08 16:57:52 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>

class File
{
		std::string _fileName;
		std::string _outFileName;
	public:
		const std::string getFileName(void);
		const std::string getOutFileName(void);
		File(std::string inFile);
		~File();
};

int readContent(std::string& content, File& _file);
int writeOutFile(std::string& content, char **av, File& _file);
