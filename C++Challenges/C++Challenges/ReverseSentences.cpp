#include "ReverseSentences.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;


ReverseSentences::ReverseSentences()
{
}


ReverseSentences::~ReverseSentences()
{
}

void ReverseSentences::SentenceReverse() {

	ifstream stream;
	stream.open("sentences.txt");

	// create an string to hold input from file
	string inputString;

	// while you can getline from the stream to the string holder
	while (getline(stream, inputString, '\r'))
	{
		// open stringstream
		stringstream sstream(inputString);

		// create a vector to hold each string from the line
		vector<string> strings;
		string temp;

		while (sstream >> temp)
		{
			strings.push_back(temp);
		}

		int i = strings.size() - 1;
		while (i >= 0)
		{
			cout << strings[i] << " ";
			i--;
		}
		cout << endl << endl;

		/*
		// reverse the string
		reverse(strings.begin(), strings.end());

		// print it out
		for (unsigned int i = 0; i < strings.size(); i++)
		{
		cout << strings[i] << " ";
		}
		cout << endl;
		*/

		// clear it for the next line
		sstream.clear();
		strings.clear();
	}

	stream.close();
};