/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:14:32 by jose-gon          #+#    #+#             */
/*   Updated: 2025/05/07 17:33:55 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

wrongCat::wrongCat()
{
	std::cout << "wrongCat Constructor called" << std::endl;
	_type = "wrongCat";
}

wrongCat::wrongCat(const wrongCat& source)
{
	std::cout << "wrongCat Constructor Copy called" << std::endl;
	_type = source._type;
}

wrongCat& wrongCat::operator=(const wrongCat& source)
{
	std::cout << "wrongCat Constructor Copy called" << std::endl;
	_type = source._type;
	return (*this);
}

wrongCat::~wrongCat()
{
	std::cout << "wrongCat Destructor called" << std::endl;
}

void	wrongCat::makeSound() const
{
	std::cout << _type << " says: MAUI MAUI MAUI!!!" << std::endl;
}
