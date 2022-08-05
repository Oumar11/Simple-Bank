/*
 * Practice2_1.cpp
 *
 *  Created on: Jul 2, 2022
 *      Author: Omar
 */

#include <iostream>
#include <stdint.h>
#include <string.h>
#include "Bank.h"



using namespace std;



int main ()
{

	enum Requests
	{
		OPEN_ACCOUNT,   	//0
		BALANCE_ENQUIRY,	//1
		DEPOSIT,			//2
		WITHDRAW,			//3
		CLOSE_ACCOUNT,    	//4
		SHOW_ALL_ACCOUNTS,	//5
		QUIT				//6
	};
	Bank B;

	cout << "Welcome to Si-Vision's Bank\n\n ";
	cout << "Please press the key that Matches your process\n\n";
	cout << " 0 --> Open a new Account\n";
	cout << " 1 --> Balance Inquiry\n";
	cout << " 2 --> Deposit\n";
	cout << " 3 --> Withdraw\n";
	cout << " 4 --> Close Account\n";
	cout << " 5 --> Show All Accounts\n";
	cout << " 6 --> Quit\n";

	int Uentry;
	do
	{
		cin >> Uentry;

		if (Uentry == OPEN_ACCOUNT)
		{
			string f;
			string l;
			float balance;
			cout << "Please Enter First name :\n";
			cin >> f;
			cout << "Please Enter Last name :\n";
			cin >> l;
			cout << "Please Enter the Balance :\n";
			cin >> balance;
			B.OpenAccount(f, l, balance);
			cout << "Please press the key that Matches your process\n";
		}
		if (Uentry == BALANCE_ENQUIRY)
		{
			int acctemp;
			cout <<"Please Enter Account Number: \n";
			cin >> acctemp;
			B.BalanceEnquiry(acctemp);
			cout << "Please press the key that Matches your process\n";
		}
		if (Uentry == DEPOSIT)
		{
			int acctemp;
			int balance;
			cout <<"Please Enter Account Number: \n";
			cin >> acctemp;
			cout << "Please Enter the Balance :\n";
			cin >> balance;
			B.Deposit(acctemp,balance);
			cout << "Please press the key that Matches your process\n";
		}
		if (Uentry == WITHDRAW)
		{
			int acctemp;
			int balance;
			cout <<"Please Enter Account Number: \n";
			cin >> acctemp;
			cout << "Please Enter the Balance :\n";
			cin >> balance;
			B.withdraw(acctemp,balance);
			cout << "Please press the key that Matches your process\n";
		}

		if (Uentry == CLOSE_ACCOUNT)
		{
			int acctemp;
			cout <<"Please Enter Account Number: \n";
			cin >> acctemp;
			B.CloseAccount(acctemp);
			cout << "Please press the key that Matches your process\n";
		}
		if (Uentry == SHOW_ALL_ACCOUNTS)
		{

			B.ShowAllAccounts();
			cout << "Please press the key that Matches your process\n";
		}
	}
	while (Uentry != QUIT);


}






