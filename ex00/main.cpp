/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:33:57 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/16 17:14:28 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
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

	return 0;

}
