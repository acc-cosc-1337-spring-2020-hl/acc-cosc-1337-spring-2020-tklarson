#include "bank_account.h"

//bank_account.cpp

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		//usually writre to a file
		throw InvalidAmount("\nAmount must be greater than 0.\n");
	}
}
void BankAccount::withdraw(int amount)
{
	if (amount <= 0)
	{
		throw InvalidAmount("\nAmount must be greater than 0.\n");
	}
	else if (balance - amount < 0)
	{
		throw InvalidAmount("\nInsufficient Funds.\n");
	}
	else
	{
		balance -= amount;
	}
}

