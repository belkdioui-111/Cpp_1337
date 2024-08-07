/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:49:52 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/13 10:05:01 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <vector>

int main()
{
    Span sp=Span(12);
    std::vector<int> vect;
    try {
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);
    vect.push_back(6);
    sp.print_cont();
    sp.addrangenumber(vect.begin(), vect.end());
    std::cout<<sp.shortestSpan()<<std::endl;
    std::cout<<sp.longestSpan()<<std::endl;
    sp.print_cont();
    } catch (std::exception& e) {
        std::cout<<e.what()<<std::endl;
    }

}