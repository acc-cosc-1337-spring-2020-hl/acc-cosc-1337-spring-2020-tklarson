//atm.h
#include<vector>
#include<iostream>
#include "savings_account.h"
#include"checking_account.h"
#include"customer.h"

#ifdef ATM_H
#define ATM_H

class ATM
{
public:
	ATM(Customer& c) : customer{ c }
	{
	
	}
	friend std::ostream& operator<<(std::ostream& out, const Customer& b);

private:
	Customer customer;
};
#endif ATM_H 
