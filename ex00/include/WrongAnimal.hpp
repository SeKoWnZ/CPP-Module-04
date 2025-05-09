/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:53:43 by jose-gon          #+#    #+#             */
/*   Updated: 2025/05/07 17:33:55 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class wrongAnimal
{
	protected:
		std::string _type;
	public:
		wrongAnimal();
		wrongAnimal(const wrongAnimal &source);
		wrongAnimal &operator=(const wrongAnimal &source);
		~wrongAnimal();
		void makeSound() const;
		std::string getType() const;
};
 
#endif
