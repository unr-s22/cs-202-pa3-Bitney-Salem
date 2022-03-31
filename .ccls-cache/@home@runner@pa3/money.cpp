#include "money.h"
#include <iostream>

Money::Money(const int &dollar, const int &cent){
	cents = dollar*100+cent;
}

double Money::getBalance(){
	return cents/100.0;
}
