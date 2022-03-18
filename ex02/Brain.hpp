/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:55:14 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/17 15:41:06 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define IDEAS_SIZE 100

#include <string>

class Brain
{

	private:

		std::string _ideas[IDEAS_SIZE];
		unsigned long _ideasCount;

	public:

		Brain(void);
		Brain(Brain const &src);
		~Brain(void);

		Brain &operator=(Brain const &rhs);
		void addIdea(std::string idea);
		void printIdeas(void) const;

};

#endif
