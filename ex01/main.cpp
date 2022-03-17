/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:33:57 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/17 17:06:53 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

# define ARR_SIZE 4
# define GREEN "\033[32m"
# define RESET "\033[0m"

int main() {

	Animal *animals[ARR_SIZE];

	for (int i = 0; i < ARR_SIZE/2; i++) {
		animals[i] = new Dog();
		animals[i]->makeSound();
		std::cout << std::endl;
	}

	for (int i = ARR_SIZE/2; i < ARR_SIZE; i++) {
		animals[i] = new Cat();
		animals[i]->makeSound();
		std::cout << std::endl;
	}

	for (int i = 0; i < ARR_SIZE; i++) {
		delete animals[i];
		std::cout << std::endl;
	}

	system("leaks Polymorphism");

	/////////////////////////////////////////////////////////////
	
	std::cout	<< GREEN << "Testing out whether copies of Dog"
				<< std::endl << "and Cat are deep or shallow copies:"
				<< RESET << std::endl << std::endl;

	/////////////////////////////////////////////////////////////
	
	std::cout   << GREEN << "Dog:"
				<< RESET << std::endl << std::endl;

	Dog d1;

	std::cout << std::endl;
	d1.getBrain().addIdea("I LOVE ME HOOMAN");
	d1.getBrain().addIdea("ME HOOMAN SAID AM A GOOD BOI!!!!");
	std::cout << std::endl;

	Dog d2 = d1;

	std::cout << std::endl;
	d2.getBrain().printIdeas();
	std::cout << std::endl;

	/////////////////////////////////////////////////////////////
	
	std::cout   << GREEN << "Cat:"
				<< RESET << std::endl << std::endl;

	Cat c1;

	std::cout << std::endl;
	c1.getBrain().addIdea("food...");
	c1.getBrain().addIdea("give me food...");
	c1.getBrain().addIdea("YOU GIVE ME FOOD NOW YOU SLAVE!");
	std::cout << std::endl;

	Cat c2 = c1;

	std::cout << std::endl;
	c2.getBrain().printIdeas();
	std::cout << std::endl;

	return (0);

}
