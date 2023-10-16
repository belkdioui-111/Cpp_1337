/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:49:11 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/14 12:04:05 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include <iostream>


class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj);
        ~Dog();
        // virtual void makeSound();
};

#endif