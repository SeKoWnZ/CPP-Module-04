/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:17:39 by jose-gon          #+#    #+#             */
/*   Updated: 2025/04/30 19:18:17 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <Animal.hpp>

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& other);
		Cat &operator=(const Cat& other);
		~Cat();
		void	makeSound() const;
};

#endif