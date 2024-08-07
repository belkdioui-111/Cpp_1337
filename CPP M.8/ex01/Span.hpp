/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:14:37 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/12 13:15:22 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include<iostream>
#include<vector>

class Span
{
    public :
        Span();
        Span(unsigned int N);
        Span(const Span& obj);
        Span operator=(const Span& obj);
        ~Span();
        
        void addNumber(int number);
        void print_cont();
        int shortestSpan();
        int longestSpan();
        void addrangenumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
        
    private:
        unsigned int size;
        std::vector<int> span;
};

#endif