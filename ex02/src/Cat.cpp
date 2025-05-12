/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:14:32 by jose-gon          #+#    #+#             */
/*   Updated: 2025/05/08 19:56:47 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat()
{
	std::cout << "Cat Constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat& source)
{
	std::cout << "Cat Constructor Copy called" << std::endl;
	_type = source._type;
	_brain = new Brain(*source._brain);
}

Cat& Cat::operator=(const Cat& source)
{
	std::cout << "Cat Constructor Copy called" << std::endl;
	_type = source._type;
	for (int i = 0; i < 100; i++)
		_brain[i] = source._brain[i];
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout << _type << " says: MIAU MIAU MIAU!!!" << std::endl;
}
