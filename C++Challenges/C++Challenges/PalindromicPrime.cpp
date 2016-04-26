#include "PalindromicPrime.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> //********* Needed for Reverse on CodeEval **********//

using namespace std;


PalindromicPrime::PalindromicPrime()
{
}


PalindromicPrime::~PalindromicPrime()
{
}


void PalindromicPrime::PrintPalindromicPrime()
{
	// vector to hold all primes as strings
	vector<string> Primes;

	// starting prime, has to be > 100
	int CurrentNum = 102;

	// has to be under 1000
	while (CurrentNum < 1000)
	{
		// default to it being prime
		bool IsAPrime = true;

		// if it is divisible by any number, flag it not a prime
		for (int i = 2; i < CurrentNum; i++)
		{
			if (CurrentNum % i == 0)
			{
				IsAPrime = false;
			}
		}
		// if its a prime, add to vector
		if (IsAPrime)
		{
			Primes.push_back(to_string(CurrentNum));
		}
		// go to next number
		CurrentNum++;
	}
	// holds current high number
	string CurrentHigh;
	// reverse string to compare
	string ReversePrime;
	// for each prime number
	for (unsigned int i = 0; i < Primes.size(); i++)
	{
		ReversePrime = Primes[i];
		reverse(ReversePrime.begin(), ReversePrime.end());
		// check if it is equal to itself backwards
		if (Primes[i] == ReversePrime)
		{
			// if so update the current high number
			CurrentHigh = Primes[i];
		}
	}
	// print off the highest prime palindrome
	cout << CurrentHigh << endl;
}