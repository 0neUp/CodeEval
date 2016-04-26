#include "BinaryChallenge.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;

BinaryChallenge::BinaryChallenge()
{
}


BinaryChallenge::~BinaryChallenge()
{
}


void BinaryChallenge::BinaryTest()
{
	string holder; // holds the getline for the stringstream
	int zeros, range, count = 0; // amount of zeros to look for, how far to look, the count of results
	vector<string> binary_nums; // holds all the binary results in range

								// create a file stream
	ifstream input("binary.txt");

	// getline to get numbers
	while (getline(input, holder, '\r'))
	{
		// create a string stream
		stringstream stream(holder);

		// parse the string to get the 2 ints (zeros, range)
		while (stream >> zeros >> range)
		{

			// fill a vector<string> with all binarys in range
			for (int i = 1; i <= range; i++)
			{
				//_itoa_s(i,buffer,2) convert int value to null-terminated string
				//_itoa_s(i, buffer, 2);
				//binary_nums.push_back( buffer );

				int decimal_int = i;
				string string_to_hold_binary = "";

				// Converting to Binary								(Ex: 11)
				// Going in reverse (smaller value, on left)
				// Check remainder after deviding by 2 to get 1's	(Ex: 11 % 2 = 1)			(1)
				// Then devide original number by 2					(Ex: 11 / 2 = 5)
				// Check remainder again to get 2's					(Ex: 5 % 2 = 1)				(11)
				// Devide by 2 again								(Ex: 5 / 2 = 2)
				// Check remainder again to get 4's					(Ex: 2 % 2 = 1)				(110)
				// Devide by 2 again								(Ex: 2 / 2 = 1)
				// Check remainder again to get 8's					(Ex: 2 % 1 = 1)				(1101)
				// Devide by 2 a final time							(Ex: 1 / 2 = 0)
				// Then reverse to get answer						(Ex: reverse(begin,end))	(1011)
				for (int j = 0; decimal_int > 0; j++) {
					string_to_hold_binary += to_string(decimal_int % 2);
					decimal_int = decimal_int / 2;
				}
				// add to vector
				binary_nums.push_back(string_to_hold_binary);

			}
			// reverse the vector
			for (unsigned int i = 0; i < binary_nums.size() - 1; i++)
			{
				reverse(binary_nums[i].begin(), binary_nums[i].end());
			}

			// now we have a full vector, time to use count
			// for each vector position see if number of zeros matches
			for (int i = 0; i < range; i++)
			{
				int num_zeros = 0;
				// for each string in vector, loops through individual chars for 0
				for (unsigned int j = 0; j < binary_nums[i].size(); j++)
				{
					if (binary_nums[i][j] == '0')
					{
						num_zeros++;
					}
				}
				// if it matches # of zeros increase the count
				if (num_zeros == zeros)
				{
					count++;
				}
			}
			// report # of matches
			cout << count << endl;
			// reset for next test run
			count = 0;
			binary_nums.clear();
		}
	}

}