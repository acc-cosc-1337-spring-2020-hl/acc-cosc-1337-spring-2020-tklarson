//Write the function code that returns the product of hours and hourly_rate.
#include "decision.h" 

int gross_pay(int h, int hourly_rate)
{
	int gross;

	if (h <= 40)
	{
		gross = (h*hourly_rate);
	}
	else
	{
		gross = 40 * hourly_rate + ((h - 40)*(hourly_rate*1.5));
	}

	return gross;
}
