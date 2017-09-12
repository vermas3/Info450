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

	cout << " Cost " << endl;
	cin >> Cost;

	cout << " Amount Added " << endl;
	cin >> AmountPaid;

	while (true)
	{

		if (Cost > AmountPaid) {
			Difference = Cost - AmountPaid;
			cout << " The difference is " << Difference << endl;
			cin >> AmountMore;
			AmountPaid = AmountPaid + AmountMore;
		}

		else {

			cout << "Thank you for your Purchase";
			break;

		}
	}
	return 0;

}






