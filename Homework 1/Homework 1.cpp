// Homework 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;






int main()
{
	float Cost = 0;
	float AmountPaid = 0;
	float Difference = Cost - AmountPaid;
	float AmountMore = 0;
	float yourchange = 0;
	int dollars;
	int quarters;
	int dimes;
	int nickels;
	int ndollars;
	int nquarters;
	int ndimes;
	int nnickels;

	cout << " Please enter the Cost of the item " << endl;
	cin >> Cost;

	cout << " Please enter the amount paid " << endl;
	cin >> AmountPaid;

	while (true)
	{

		if (Cost > AmountPaid) {
			Difference = Cost - AmountPaid;
			cout << " That is not enough! you need " << Difference << " more " << endl;
			cin >> AmountMore;
			AmountPaid = AmountPaid + AmountMore;
		}

		else if (Cost < AmountPaid) {
			yourchange = AmountPaid - Cost;
			cout << " Your change is " << yourchange << endl;
			

			ndollars = yourchange / 100;
			yourchange = yourchange - (ndollars*1.0);
			cout << yourchange << " Dollar(s) " << endl;
				
				

				nquarters = yourchange / 25;
				yourchange = yourchange - (nquarters*1.0);

				ndimes = yourchange / 10;
				yourchange = yourchange - (ndimes*1.0);

				nnickels = yourchange / 5;
				yourchange = yourchange - (nnickels*1.0);
				break;

			
		}
		else {

			cout << " Thank you for your Purchase. ";
			break;

		}
			
	}
	return 0;

}






