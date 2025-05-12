/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:14:32 by jose-gon          #+#    #+#             */
/*   Updated: 2025/05/08 19:57:24 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

wrongCat::wrongCat()
{
	std::cout << "wrongCat Constructor called" << std::endl;
	_type = "wrongCat";
	_brain = new Brain();
}

wrongCat::wrongCat(const wrongCat& source)
{
	std::cout << "wrongCat Constructor Copy called" << std::endl;
	_type = source._type;
	_brain = new Brain(*source._brain);
}

wrongCat& wrongCat::operator=(const wrongCat& source)
{
	std::cout << "wrongCat Constructor Copy called" << std::endl;
	_type = source._type;
	for (int i = 0; i < 100; i++)
		_brain[i] = source._brain[i];
	return (*this);
}

wrongCat::~wrongCat()
{
	std::cout << "wrongCat Destructor called" << std::endl;
	delete _brain;
}

void	wrongCat::makeSound() const
{
	std::cout << _type << " says: MAUI MAUI MAUI!!!" << std::endl;
}
