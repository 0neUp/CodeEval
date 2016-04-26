#include "RollerCoasterCase.h"
#include <iostream>
#include <fstream>
#include <sstream>  // needed for getline

using namespace std;

RollerCoasterCase::RollerCoasterCase()
{
}

RollerCoasterCase::~RollerCoasterCase()
{
}



void RollerCoasterCase::Rollercoasterize()
{
	// open input file 
	ifstream input("rollercoaster.txt");

	// string to hold line
	string sentence = "";

	// grab the str
	while (getline(input, sentence))
	{
		// int to hold count
		int count = 1;
		for (int i = 0, total = sentence.length(); i < total; i++)
		{
			// if it is alpha char
			if (isalpha(sentence[i]))
			{
				// if odd count, make uppercase
				if (count % 2 == 0) {
					sentence[i] = tolower(sentence[i]);
				}
				// if even count, make lowercase
				else {
					sentence[i] = toupper(sentence[i]);
				}
				// increment the count
				count++;
			}
		}

		// print out our results
		cout << sentence << endl;

		// reset the sentence and count
		sentence = "";
		count = 1;
	}




}
