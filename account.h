#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include "money.h"
#include <vector>
#include <iomanip>

class Account{
private:
	int balance;
	bool updated = false;

protected:
	std::vector<Money> deposits, withdrawals;

public:
	explicit Account(Money &init);

	void makeDeposit(Money m1);
	void makeWithdrawal(Money m2);
	double getBalance();

	friend std::ostream &operator<< (std::ostream &out, Account account);

};

#endif