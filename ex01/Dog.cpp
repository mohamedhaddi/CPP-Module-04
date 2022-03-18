/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:10:12 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/17 16:48:47 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
	return ;
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		*this->brain = *rhs.brain;
	}
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
	return ;
}

Brain &Dog::getBrain(void) const
{
	return *this->brain;
}
