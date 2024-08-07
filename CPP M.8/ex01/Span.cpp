/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:35:13 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/11/13 10:04:37 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>
#include <sstream>
#include <stdexcept>

Span::Span():size(0){}
Span::Span(unsigned int N): size(N){}
Span::Span(const Span& obj)
{
    this->size = obj.size;
    this->span = obj.span;
}
Span Span::operator=(const Span& obj)
{
    this->size = obj.size;
    this->span = obj.span;
    return *this;
}
Span::~Span(){}

void Span::addNumber(int number)
{
    if (span.size() < size)
        span.push_back(number);
    else
        throw std::runtime_error("the container is full");
}

void Span::print_cont()
{
    std::vector<int>::iterator iter;

    for (iter = span.begin(); iter != span.end(); ++iter) {
        std::cout<<*iter<<" ";
    }
    std::cout<<std::endl;
}

int Span::shortestSpan()
{
    if(span.size() <= 1)
        throw std::runtime_error("no numbers or only one in container");
    int shortestdiff = INT_MAX;
    std::vector<int>::iterator first;
    
    std::sort(span.begin(), span.end());
    for (first=span.begin(); first != span.end() - 1; ++first)
    {
        if(*(first +1) - *first < shortestdiff)
            shortestdiff = *(first +1) - (*first);
    }
    return (shortestdiff);
}

int Span::longestSpan()
{
    if(span.size() <= 1)
        throw std::runtime_error("no numbers or only one in container");
    std::sort(span.begin(), span.end());
    return (span.back() - span.front());
}

void Span::addrangenumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
    if((last - first > size) || (size - span.size() < static_cast<unsigned long>(last - first)))
        throw std::runtime_error("i can't add the range to your span because the span is too short");
    else
        for (; first != last; first++) {
            addNumber(*first);
        };
}