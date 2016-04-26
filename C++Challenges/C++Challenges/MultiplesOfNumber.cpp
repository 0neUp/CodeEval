/***************************************************************************

Given numbers x and n, where n is a power of 2,
print out the smallest multiple of n which is greater than or equal to x.
Do not use division or modulo operator.

****************************************************************************/

#include "MultiplesOfNumber.h"
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;


MultiplesOfNumber::MultiplesOfNumber()
{
}


MultiplesOfNumber::~MultiplesOfNumber()
{
}

void MultiplesOfNumber::PrintSmallestMultiple()
{
	ifstream in_stream;
	in_stream.open("MultiplesOfANumber.txt");

	// x = number, n = find multiples of this, comma = ','
	int x, n;
	char comma;
	while (in_stream >> x >> comma >> n)
	{
		int times = 1;
		while (1)
		{
			if ( (n*times) >= x)
			{
				cout << (n*times) << endl;
				break;
			}
			times++;
		}
		
	}
}
