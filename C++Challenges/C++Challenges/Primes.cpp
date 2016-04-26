#include "Primes.h"
#include <iostream>

using namespace std;


Primes::Primes()
{
}

Primes::~Primes()
{
}

void Primes::printPrimes()
{
	int sum = 0;
	int primeCount = 0;
	// have to start with 2, 1 is not prime
	int currentNum = 2;

	while (primeCount < 1000) {
		if (currentNum == 2 || currentNum == 3) {
			sum += currentNum;
			primeCount++;
		}
		else {
			bool divisible_by_something = false;
			for (int i = 2; i < currentNum; i++) {
				if (currentNum % i == 0) {
					divisible_by_something = true;
				}
			}
			if (!divisible_by_something) {
				sum += currentNum;
				primeCount++;
			}
		}
		currentNum++;
	}
	cout << "Number of Primes: " << primeCount << endl;
	cout << "Last Prime: " << (currentNum - 1) << endl;
	cout << "Sum: " << sum << endl << endl;
}
