/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:55:36 by jose-gon          #+#    #+#             */
/*   Updated: 2025/05/12 21:30:13 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <WrongAnimal.hpp>
#include <Brain.hpp>

class wrongCat : public wrongAnimal
{
	private:
		Brain* _brain;
	public:
		wrongCat();
		wrongCat(const wrongCat& source);
		wrongCat &operator=(const wrongCat& source);
		~wrongCat();
		void	makeSound() const;
};

#endif
