/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:52:33 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/10/27 18:39:11 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm() : name(""), grade_s(150) , grade_e(150){};
AForm::AForm(std::string const Name, int Grade_s, int Grade_e) : name(Name) , signe(false) ,grade_s(Grade_s) , grade_e(Grade_e) 
{
    if (Grade_s < 1) 
        throw GradeTooHighException();
    else if (Grade_s > 150)
        throw GradeTooLowException();
    if (Grade_e < 1) 
        throw GradeTooHighException();
    else if (Grade_e > 150)
        throw GradeTooLowException();           
};
AForm::AForm(const AForm& obj) : name(obj.name), signe(obj.signe) , grade_s(obj.grade_s), grade_e(obj.grade_e){};
AForm& AForm::operator=(const AForm& obj){ (void) obj; return *this;};
AForm::~AForm(){};
std::string const AForm::getName() const {return name;};
int AForm::getGrade_s() const {return grade_s;};
int AForm::getGrade_e() const {return grade_e;};
bool AForm::getSigne() const {return signe;};

void AForm::beSigned(Bureaucrat& obj)
{
    if (obj.getGrade() <= this->grade_s) {
        this->signe = true;
    }
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& output, const AForm& obj)
{
    output<<obj.getName()<<", AForm grade requierd"<<obj.getGrade_e() <<", AForm grade sign"<<obj.getGrade_s()<<", is signed ?? "<<obj.getSigne();
    return output;
}