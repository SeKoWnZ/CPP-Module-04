/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:52:36 by jose-gon          #+#    #+#             */
/*   Updated: 2025/05/08 17:16:56 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain()
{
	std::cout << "Brain Constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		_ideas[i] = "No idea :(";
}

Brain::Brain(const std::string str)
{
	std::cout << "Brain Constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		_ideas[i] = str;
}

Brain::Brain(const Brain& source)
{
	std::cout << "Copy Brain Constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		_ideas[i] = source._ideas[i];
}

Brain& Brain::operator=(const Brain& source)
{
	std::cout << "Brain copy operator" << std::endl;
	for(int i = 0; i < 100; i++)
		_ideas[i] = source._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}
