/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:14:32 by jose-gon          #+#    #+#             */
/*   Updated: 2025/04/30 19:30:24 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog()
{
	std::cout << "Dog Constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& source)
{
	std::cout << "Dog Constructor Copy called" << std::endl;
	_type = source._type;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog Constructor Copy called" << std::endl;
	_type = other._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << _type << " says: WOF WOF WOF!!" << std::endl;
}
