/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:55:14 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/17 18:58:16 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{

	private:

		Brain* brain;

	public:

		Cat(void);
		Cat(Cat const &src);
		~Cat(void);
		Cat &operator=(Cat const &rhs);

		void makeSound(void) const;
		Brain &getBrain(void) const;

};

#endif
