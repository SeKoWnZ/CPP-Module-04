/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:29:46 by jose-gon          #+#    #+#             */
/*   Updated: 2025/05/09 11:48:53 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <WrongAnimal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i;
	
	Animal* catsAndDogs[100];
	for (int i = 0; i < 50; i++) {
		std::cout << "\n" << i + 1 << std::endl;
		catsAndDogs[i] = new Dog();
	}
	for (int i = 50; i < 100; i++) {
		std::cout << "\n" << i + 1 << std::endl;
		catsAndDogs[i] = new Cat();
	}

	for (int i = 0; i < 100; i++) {
		delete catsAndDogs[i];
	}
	return (0);
}
