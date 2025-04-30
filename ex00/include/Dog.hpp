/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:40:41 by jose-gon          #+#    #+#             */
/*   Updated: 2025/04/30 19:17:16 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <Animal.hpp>

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& other);
		Dog &operator=(const Dog& other);
		~Dog();
		void	makeSound() const;
};

#endif