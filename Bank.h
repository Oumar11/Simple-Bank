/*
 * Bank.h
 *
 *  Created on: Jul 2, 2022
 *      Author: Omar
 */

#ifndef BANK_H_
#define BANK_H_

#include "Account.h"
#include <map>
using namespace std;


class Bank {
private :
	map<int ,Account> Map;

public:
	Bank();
	~Bank();

	void OpenAccount (const string& first , const string &last , float balance);
	float BalanceEnquiry(long accountNumber);
	void Deposit(long accountNumber,float amount);
	void withdraw(long accountNumber,float amount);
	void CloseAccount (long accountNumber);
	void ShowAllAccounts();
};
#endif /* BANK_H_ */
