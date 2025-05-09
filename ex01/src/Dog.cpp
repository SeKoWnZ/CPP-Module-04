/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:14:32 by jose-gon          #+#    #+#             */
/*   Updated: 2025/05/08 19:57:06 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog()
{
	std::cout << "Dog Constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog& source)
{
	std::cout << "Dog Constructor Copy called" << std::endl;
	_type = source._type;
	_brain = new Brain(*source._brain);
}

Dog& Dog::operator=(const Dog& source)
{
	std::cout << "Dog Constructor Copy called" << std::endl;
	_type = source._type;
	for (int i = 0; i < 100; i++)
		_brain[i] = source._brain[i];
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout << _type << " says: WOF WOF WOF!!" << std::endl;
}
