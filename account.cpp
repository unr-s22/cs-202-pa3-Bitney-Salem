#include "account.h"

Account::Account(Money &init){
	balance = init.getCents()*100;
}

void Account::makeDeposit(Money m1){
	deposits.push_back(m1);
	updated = true;
}

void Account::makeWithdrawal(Money m2){
	withdrawals.push_back(m2);
	updated = true;
}

double Account::getBalance(){
	if (updated){
		int newBalance = balance;
		for (int i = 0; i < deposits.size(); i++){
			newBalance += deposits.at(i).getCents()*100;
		}
		for (int i = 0; i < withdrawals.size(); i++){
			newBalance -= withdrawals.at(i).getCents()*100;
		}
		return newBalance/100.0;
	}
	else{
		return balance/100.0;
	}
}
