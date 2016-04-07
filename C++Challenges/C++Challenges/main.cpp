#include <iostream>
#include <fstream>
#include <string>

using namespace std;


// My Classes - #include " "
#include "Primes.h"
#include "ReverseSentences.h"
#include "BinaryChallenge.h"
#include "TwelveByTwelve.h"
#include "PalindromicPrime.h"
#include "MultiplesOfNumber.h"


int main(int argc, char *argv[]) {

	// Prints the sum of first 1000 primes
	Primes *primeprint = new Primes;
	primeprint->printPrimes();
	delete primeprint;

	// Reverse some sentences
	ReverseSentences *reverses = new ReverseSentences;
	reverses->SentenceReverse();
	delete reverses;

	// Binary challenge
	BinaryChallenge *challenge = new BinaryChallenge;
	challenge->BinaryTest();
	delete challenge;

	// 12 x 12 times tables
	TwelveByTwelve *timestable = new TwelveByTwelve;
	timestable->PrintTimesTable();
	delete timestable;

	// Biggest Palindromic Prime
	PalindromicPrime *palprime = new PalindromicPrime;
	palprime->PrintPalindromicPrime();
	delete palprime;

	// Smallest multiple of n to exceed x
	MultiplesOfNumber *multitest = new MultiplesOfNumber;
	multitest->PrintSmallestMultiple();
	delete multitest;

	return 0;
}