/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:25:04 by jose-gon          #+#    #+#             */
/*   Updated: 2025/04/30 19:23:27 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal()
{
	std::cout << "Animal Constructor called" << std::endl;
	_type = "Animal";
}

Animal::Animal(const Animal& source)
{
	std::cout << "Animal Constructor Copy called" << std::endl;
	_type = source._type;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal Constructor Copy called" << std::endl;
	_type = other._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << _type << " makes a some animal sound..." << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}
