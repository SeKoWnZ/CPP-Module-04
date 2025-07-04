/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:29:46 by jose-gon          #+#    #+#             */
/*   Updated: 2025/05/06 13:46:36 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <WrongAnimal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>

int main()
{
	const Animal meta;
	const Dog j;
	const Cat i;
	
	std::cout << "I'm a " << j.getType() << std::endl;
	std::cout << "I'm a " << i.getType() << std::endl;
	meta.makeSound();
	i.makeSound();
	j.makeSound();
	
	std::cout << std::endl << "---------- BAD ONES ----------" << std::endl << std::endl;
	
	const wrongAnimal wrong;
	const wrongCat h;
	std::cout << "I'm a poor " << wrong.getType() << std::endl;
	std::cout << "I'm a poor " << h.getType() << std::endl;
	wrong.makeSound();
	h.makeSound();

	std::cout << std::endl << "---------- ARMAGEDDON ----------" << std::endl << std::endl;
}
