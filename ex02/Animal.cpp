/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:10:12 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/17 18:56:53 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

AAnimal::AAnimal(void): type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

std::string AAnimal::getType(void) const
{
	return this->type;
}

