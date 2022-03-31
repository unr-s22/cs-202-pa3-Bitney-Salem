#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include "money.h"
#include <vector>
#include <iomanip>

class Account{
private:
	int balance;
	std::vector<Money> deposits, withdrawals;
	bool updated = false;

public:
	explicit Account(Money &init);

	void makeDeposit(Money m1);
	void makeWithdrawal(Money m2);
	double getBalance();

//declare outside the class declaration 
//huh?
// move it outside the curley braces
//nope	
//problem with this keyword again
//ughhhhhhhhhhhhhhhh
///the rest of it works fine! don't wanna
/// it's okay. calm hun. breathe. im thinking. try an * before out
//all of them or just the vector one
//I refreshed page and it went back to old errors
// i found it Account:: before offending ones
//I'm gonna comment it out and turn in what I have
//nope
//this is shit on my phone  sorry


	friend std::ostream &operator<< (std::ostream &out, Account &account){
		out<<"Account Details"<<std::endl;
		out<<"--------------------------"<< std::endl;
		out<<std::fixed<<std::setprecision(2)<<"Current Balance: $"<<account.getBalance()<<std::endl;
		out<<"--------------------------" <<std::endl;
		out<<"Number of Deposits: "<<deposits.size()<<std::endl;
		out<<"--------------------"<<std::endl;
		for (int i = 0; i < deposits.size(); i++){
			out<<"(i) "<<deposits.at(i)<<std::endl;
		}
		out<<"--------------------------"<<std::endl;
		out<<"Number of Withdrawals: "<<Account::withdrawals.size()<<std::endl;
		out<<"--------------------------"<<std::endl;
		for (int i = 0; i < withdrawals.size(); i++){
			out<<"(i) "<<withdrawals.at(i)<<std::endl;
		}
		out<<"----";
		return out;
  }

};

#endif