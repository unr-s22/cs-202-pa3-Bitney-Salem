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

std::ostream &operator<< (std::ostream &out, Account account){
		out<<"Account Details"<<std::endl;
		out<<"--------------------------"<< std::endl;
		out<<std::fixed<<std::setprecision(2)<<"Current Balance: $"<<account.getBalance()<<std::endl;
		out<<"--------------------------" <<std::endl;
		out<<"Number of Deposits: "<<account.deposits.size()<<std::endl;
		out<<"--------------------"<<std::endl;
		for (int i = 0; i < account.deposits.size(); i++){
			out<<"("<<i+1<<") "<<account.deposits.at(i)<<std::endl;
		}
		out<<"--------------------------"<<std::endl;
		out<<"Number of Withdrawals: "<<account.withdrawals.size()<<std::endl;
		out<<"--------------------------"<<std::endl;
		for (int i = 0; i < account.withdrawals.size(); i++){
			out<<"("<<i+1<<") "<<account.withdrawals.at(i)<<std::endl;
		}
		out<<"----";
		return out;
  }
