/*
 * Account.cpp
 *
 *  Created on: Jul 2, 2022
 *      Author: Omar
 */

#include "Account.h"
using namespace std;



int Account::nextAccountNumber = 0;

Account::Account(const string& first, const string& last, int balance):
Firstname(first),
Lastname(last),
accountNumber(nextAccountNumber),
balance(balance)

{
	incnextAccountNumber();
}

Account::Account():Account::Account("Not Initialized","Not Initialized",0)
{
}
Account::Account(const string& first, const string& last):Account::Account(first,last,0)
{
}
Account::Account(const Account& obj):Account::Account()
{
	Firstname = obj.Firstname;
	Lastname = obj.Lastname;
	balance = obj.balance;
	accountNumber = obj.accountNumber;
}
Account::~Account()
{
	decnextAccountNumber();
}


void Account::Deposit (float Deposit)
	{
		balance+= Deposit;
	}
void Account::withdraw(float withdraw)
	{
		balance -= withdraw;
	}
/*----------------------------------------------------------*/
int Account::getAccountNumber() const
	{
		return accountNumber;
	}
void Account::incnextAccountNumber ()
	{
		nextAccountNumber ++;
	}
void Account::decnextAccountNumber()
	{
		nextAccountNumber --;
	}
/*----------------------------------------------------------*/
	int Account::getBalance() const {
		return balance;
	}

	void Account::setBalance(int balance) {
		this->balance = balance;
	}
/*--------------c--------------------------------------------*/
	const string& Account::getFirstname() const {
		return Firstname;
	}

	void Account::setFirstname(const string &firstname) {
		Firstname = firstname;
	}
/*----------------------------------------------------------*/
	const string& Account::getLastname() const {
		return Lastname;
	}

	void Account::setLastname(const string &lastname) {
		Lastname = lastname;
	}

/*----------------------------------------------------------*/
	ostream& operator<<(ostream& o,  Account& trg)
	{

	o <<"Name : " << trg.getFirstname() <<" " << trg.getLastname() << "\n" << "Balance : " << trg.getBalance()<< "\n";
	return o ;

	}
