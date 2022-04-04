// author Salem Bitney
// created 3/30/22
// last edited 3/30/22
// using c++

#include "money.h"
#include "account.h"

int main() {
	Money mon(300,23), mo(200,0), mou(300,24), mone(501,22), moni(300,10), mun(201,34);
	Account newAcc(mon);

	std::cout << newAcc << std::endl;

	newAcc.makeDeposit(mo);
	newAcc.makeDeposit(mou);
	newAcc.makeDeposit(mone);

	std::cout << newAcc << std::endl;

	newAcc.makeWithdrawal(moni);
	newAcc.makeWithdrawal(mun);
	
	std::cout << newAcc << std::endl;

	//testing overloaded operators
	Money m(100,33);
	Money n(110,20);
	Money o(100,33);
	
	if (m < n){
		std::cout << m << " is less than " << n << "." << std::endl;
	}
	if (n > o){
		std::cout << n << " is greater than " << o << "." << std::endl;
	}
	if (m <= n){
		std::cout << m << " is less than or equal to " << n << "." << std::endl;
	}
	if (n >= o){
		std::cout << n << " is greater than or equal to " << o << "." << std::endl;
	}
	if (m == o){
		std::cout << m << " is equal to " << o << "." << std::endl;
	}
	if (m < n){
		std::cout << m << " is not equal to " << n << "." << std::endl;
	}
	std::cout << "$" << m+n <<std::endl;
	std::cout << "$" << n-m <<std::endl;
	
  return 0;
}