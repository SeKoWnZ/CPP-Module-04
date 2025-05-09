/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:14:32 by jose-gon          #+#    #+#             */
/*   Updated: 2025/05/07 17:33:55 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat()
{
	std::cout << "Cat Constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& source)
{
	std::cout << "Cat Constructor Copy called" << std::endl;
	_type = source._type;
}

Cat& Cat::operator=(const Cat& source)
{
	std::cout << "Cat Constructor Copy called" << std::endl;
	_type = source._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << _type << " says: MIAU MIAU MIAU!!!" << std::endl;
}
