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
	int ndollars;
	int nquarters;
	int ndimes;
	int nnickels;
	int CostCheck;
	int AmountPaidCheck = AmountPaid * 100;

BEGIN: cout << " Please enter the Cost of the item, 'NO PENNIES ALLOWED' " << endl;  // Ask Cost
	cin >> Cost;
	CostCheck = Cost * 100;
	if (CostCheck % 5) {

		cout << "Pennies are not allowed" << endl;
		cout << endl;
		goto BEGIN;
	}

AMOUNT:	cout << " Please enter the amount paid, ' NO PENNIES ALLOWED' " << endl;  // ASk AMOUNT
	cin >> AmountPaid;
	AmountPaidCheck = AmountPaid * 100;
	if (AmountPaidCheck % 5) {

		cout << "Pennies are not allowed" << endl;
		cout << endl;
		goto AMOUNT;
	}


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

			ndollars = yourchange / 1;
			int changedue = (yourchange - ndollars) * 100;
			nquarters = (changedue / 25);
			ndimes = (changedue %= 25) / 10;
			nnickels = (changedue %= 10) / 5;

			cout << " Your change is " << ndollars << " dollars" << endl;
			cout << " Your change is " << nquarters << " quarters" << endl;
			cout << " Your change is " << ndimes << " dimes" << endl;
			cout << " Your change is " << nnickels << " nickel" << endl;

			cout << " Thank you for your Purchase. " << endl;

			cout << "Lets Do it again" << endl;
			goto BEGIN;
			break;

		}
		else {

			cout << " Thank you for your Purchase. " << endl;
			break;

		}

	}
	return 0;

}

