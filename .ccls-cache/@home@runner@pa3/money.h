#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <iomanip>

class Money{
private:
	int cents;

public:
	Money(const int &dollar, const int &cent);
	double getCents();

//overloaded operators
	bool operator< (Money &money){
		return (this->getCents() < money.getCents());
  }

	bool operator> (Money &money){
		return (this->getCents() > money.getCents());
  }

	bool operator<= (Money &money){
		return (this->getCents() <= money.getCents());
  }

	bool operator>= (Money &money){
		return (this->getCents() >= money.getCents());
  }

	bool operator== (Money &money){
		return (this->getCents() == money.getCents());
  }

	bool operator!= (Money &money){
		return (this->getCents() != money.getCents());
  }

	double operator+ (Money &money){
		return (this->getCents() + money.getCents());
  }

	double operator- (Money &money){
		return (this->getCents() - money.getCents());
  }

	friend std::ostream &operator<< (std::ostream &out, Money &money){
		out << std::fixed << std::setprecision(2) << "$" << money.getCents();
		return out;
  }
};

#endif