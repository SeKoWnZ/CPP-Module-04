/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:17:39 by jose-gon          #+#    #+#             */
/*   Updated: 2025/05/07 17:33:55 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <Animal.hpp>

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& source);
		Cat &operator=(const Cat& source);
		~Cat();
		void	makeSound() const;
};

#endif