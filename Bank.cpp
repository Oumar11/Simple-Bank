/*
 * Bank.cpp
 *
 *  Created on: Jul 2, 2022
 *      Author: Omar
 */

#include "Bank.h"
#include <functional>
#include <iostream>

using namespace std;


Bank::Bank()
{

}
Bank::~Bank()
{
	Map.clear();
}
float Bank::BalanceEnquiry(long accountNumber)
{
	cout <<" Balance : " <<  Map[accountNumber].getBalance() << endl ;
	return Map[accountNumber].getBalance();
}
void Bank::OpenAccount (const string& first , const string &last , float balance)
{
	Account a (first,last,balance);

	Map.insert(pair<int,Account>(a.getAccountNumber(),a));
	cout << "Successfully Created.. \n" ;

}
void Bank::Deposit(long accountNumber,float amount)
{
	Map[accountNumber].Deposit(amount);
	cout <<"Successfully Deposited :" << amount <<"\n" ;
	cout << "Current Balance : " <<Map[accountNumber].getBalance()<<endl;
}
void Bank::withdraw(long accountNumber,float amount)
{
	Map[accountNumber].withdraw(amount);
	cout <<"Successfully Withdrawed:" << amount <<"\n" ;
	cout << "Current Balance : " <<Map[accountNumber].getBalance()<<endl;
}
void Bank::CloseAccount (long accountNumber)
{
	Map.erase(accountNumber);
	cout << "Account Closed..\n";
}
void Bank::ShowAllAccounts()
{

	for (const auto &key : Map)
	{
		Account temp = key.second;
		cout << "Account Number :" <<key.first << "\n";
		cout << temp;
		cout << "------------------------------------------\n";
	}
}
