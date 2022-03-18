/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:33:57 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/16 18:28:36 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {

	const Animal* meta = new Animal();
	const Animal* doggo = new Dog();
	const Animal* kitten = new Cat();

	std::cout << doggo->getType() << std::endl;
	std::cout << kitten->getType() << std::endl;

	kitten->makeSound();
	doggo->makeSound();
	meta->makeSound();

	delete meta;
	delete doggo;
	delete kitten;

	/////////////////////////////////////////////////
	
	const WrongAnimal* wrongKitten = new WrongCat();

	std::cout << wrongKitten->getType() << std::endl;
	wrongKitten->makeSound();
	delete wrongKitten;

	return 0;

}
