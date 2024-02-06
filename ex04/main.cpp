/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:02:59 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/06 16:11:07 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	size_t position = 0;
	size_t i = 0;
	if (ac != 4)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
	std::string file = av[1];
	std::string needle = av[2];
	std::string stack = av[3];
	std::ifstream inputFile(file);

	if (!inputFile.is_open())
	{
		std::cerr << "Could no open file!" << std::endl;
		return (1);
	}
	else
	{
		std::string content((std::istreambuf_iterator<char>(inputFile)),
							std::istreambuf_iterator<char>());
		inputFile.close();
		std::string output = file + ".replace";
		std::ofstream inputFile(output);
		if (!inputFile.is_open())
		{
			std::cerr << "Could no open file!" << std::endl;
			return (0);
		}
		if (!needle.compare(""))
		{
			inputFile << content;
			return (1);
		}
		while (position < content.length())
		{
			position = content.find(needle, position);
			if (position != std::string::npos)
			{
				for (; i < position; i++)
					inputFile << content[i];
				position += needle.length();
				i += needle.length();
				inputFile << stack;
			}
			else
			{
				while (i < content.length())
					inputFile << content[i++];
			}
		}
		inputFile.close();
	}
	return (0);
}
