#include "bank_account.h"
#include<iostream>
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

void BankAccount::open(int amount)
{
	if (balance > 0)
	{
		throw InvalidAmount("Account already open, use deposit...");
	}
	if (amount >= min_balance_to_open)
	{
		balance += amount;
	}
	else
	{
		throw InvalidAmount("A deposit of at least 25....");
	}
}

double BankAccount::rate = init_rate();

void display_balance(const BankAccount & b)
{
	std::cout << "Balance is: " << b.balance << "\n";
}

std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
	out << "Balance is: " << b.balance << "\n";

	return out;
}

std::istream & operator>>(std::istream & in, BankAccount & b)
{
	int amount;
	std::cout << "Enter amount to deposit: ";
	in >> amount;
	b.deposit(amount);
	return in;
}
