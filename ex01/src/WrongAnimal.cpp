/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:25:04 by jose-gon          #+#    #+#             */
/*   Updated: 2025/05/07 17:33:55 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

wrongAnimal::wrongAnimal()
{
	std::cout << "wrongAnimal Constructor called" << std::endl;
	_type = "wrongAnimal";
}

wrongAnimal::wrongAnimal(const wrongAnimal& source)
{
	std::cout << "wrongAnimal Constructor Copy called" << std::endl;
	_type = source._type;
}

wrongAnimal& wrongAnimal::operator=(const wrongAnimal& source)
{
	std::cout << "wrongAnimal Constructor Copy called" << std::endl;
	_type = source._type;
	return (*this);
}

wrongAnimal::~wrongAnimal()
{
	std::cout << "wrongAnimal Destructor called" << std::endl;
}

void	wrongAnimal::makeSound() const
{
	std::cout << _type << " makes a some animal really WRONG sound..." << std::endl;
}

std::string wrongAnimal::getType() const
{
	return (_type);
}
