/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:10:12 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/17 16:18:32 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void): _ideasCount(0)
{
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (unsigned long i = 0; i < rhs._ideasCount; i++)
			this->_ideas[i] = rhs._ideas[i];
		this->_ideasCount = rhs._ideasCount;
	}
	return *this;
}

void Brain::addIdea(std::string idea)
{
	this->_ideas[this->_ideasCount] = idea;
	std::cout << "New idea added" << std::endl;
	this->_ideasCount++;
}

void Brain::printIdeas(void) const
{
	for (unsigned long i = 0; i < this->_ideasCount; i++)
		std::cout << this->_ideas[i] << std::endl;
}
