/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:41:04 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/09/27 11:26:53 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>

void print_the_cuu_time()
{
    std::time_t currTime;
    std::time(&currTime);

    char strTime[16];
    std::strftime(strTime, sizeof(strTime), "%Y%m%d_%H%M%S", std::localtime(&currTime));
    std::cout<<"["<<strTime<<"] ";
}

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    print_the_cuu_time();
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    std::cout <<"index:" << _accountIndex << ";"
            << "amount:" << _amount << ";" << "created"
            << std::endl;
    _nbAccounts++;
    _totalAmount += _amount;
}

void    Account::displayStatus( void ) const
{
    print_the_cuu_time();
    std::cout <<"index:" << _accountIndex << ";"
            << "amount:" << _amount <<";deposits:"
         <<_nbDeposits<<";withdrawals:"
         <<_nbWithdrawals<<std::endl;
}

void Account::makeDeposit(int deposit)
{
    print_the_cuu_time();
         _nbDeposits++;
    std::cout <<"index:" << _accountIndex << ";"
            << "p_amount:" << _amount <<";deposit:"
         <<deposit<<";amount:"<<_amount+deposit<<";nb_deposits:"
         <<_nbDeposits<<std::endl;
         _totalAmount += deposit;
         _amount += deposit;
         _totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    print_the_cuu_time();
    std::cout <<"index:" << _accountIndex << ";"
            << "p_amount:" << _amount <<";withdrawal:";
         if (withdrawal > _amount)
        {
            std::cout<< "refused"<<std::endl;
            return(false);
        }
         std::cout<<withdrawal<<";amount:" << _amount - withdrawal << ";nb_withdrawals:"<<_nbWithdrawals<<std::endl;;
         _amount -= withdrawal ;
         _totalAmount -= withdrawal;
         _nbWithdrawals++;
         _totalNbWithdrawals++;
         
    return true;
}
Account::~Account()
{
    print_the_cuu_time();
    std::cout <<"index:" << _accountIndex << ";"
            << "amount:" << _amount << ";" << "closed"
            << std::endl;
}
int	Account::getNbAccounts( void )
{
    return(_nbAccounts);
}
int	Account::getTotalAmount( void )
{
    return(_totalAmount);
}
int	Account::getNbDeposits( void )
{
    return(_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return(_totalNbWithdrawals);
}
int	getTotalAmount( void );
int	getNbDeposits( void );
int	getNbWithdrawals( void );
void    Account::displayAccountsInfos(void)
{
    print_the_cuu_time();
    std::cout <<"accounts:"<<_nbAccounts<<";"
         <<"total:"<<getTotalAmount()<<";deposits:"
         <<getNbDeposits()<<";withdrawals:"
         <<getNbWithdrawals()<<std::endl;
}