/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:29:46 by jose-gon          #+#    #+#             */
/*   Updated: 2025/05/12 21:33:45 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <Animal.hpp>
// #include <WrongAnimal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>

int main()
{
	std::cout << "             RIGHT CLASSES" << std::endl;

	const Animal* rightDog = new Dog();
	const Animal* rightCat = new Cat();
	//const Animal* alpha;

	std::cout << "Hi, im a : " << rightDog->getType() << " " << std::endl;
	rightDog->makeSound();
	std::cout << "Hi, im a : " << rightCat->getType() << " " << std::endl;
	rightCat->makeSound();
	// std::cout << alpha->getType() << " " << std::endl;
	// alpha->makeSound();
	
	std::cout << "             WRONG CLASSES" << std::endl;
	
	wrongCat();
	const wrongAnimal* wrongWrongCat = new wrongCat();
	const wrongAnimal beta;

	std::cout << wrongWrongCat->getType() << " " << std::endl;
	wrongWrongCat->makeSound();
	std::cout << beta.getType() << " " << std::endl;
	beta.makeSound();
	
	return (0);
}
