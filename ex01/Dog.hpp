/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:55:14 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/17 15:29:29 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

	private:

		Brain* brain;

	public:

		Dog(void);
		Dog(Dog const &src);
		~Dog(void);
		Dog &operator=(Dog const &rhs);

		void makeSound(void) const;
		Brain &getBrain(void) const;

};

#endif
