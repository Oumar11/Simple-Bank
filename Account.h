/*
 * Account.h
 *
 *  Created on: Jul 2, 2022
 *      Author: Omar
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string.h>
using namespace std;




class Account {
private:

 string Firstname;
 string Lastname;
 int accountNumber;
 float balance;
 static int nextAccountNumber;



public:
	Account();
	Account(const string& , const string&, int);
	Account(const string& , const string& );
	Account(const Account&);

	virtual ~Account();


	void Deposit(float);
	void withdraw(float);




	int getAccountNumber()const;

	void incnextAccountNumber ();
	void decnextAccountNumber();

	int getBalance()const;
	void setBalance(int balance);

	const string& getFirstname()const;
	void setFirstname(const string &firstname);

	const string& getLastname()const;
	void setLastname(const string &lastname);

};

ostream& operator<<(ostream& o,  Account&);


#endif /* ACCOUNT_H_ */
