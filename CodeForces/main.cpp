// CodeForces.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

const int vowelsCount = 5;
const char vowels[] = {'a', 'e', 'i', 'o', 'u'};

bool isCharVowel(const char& ch)
{
	for(int i = 0; i < vowelsCount; ++i)
	{
		if(ch == vowels[i])
		{
			return true;
		}
	}

	return false;
}

vector<int> amountOfVowels(const string& str)
{
	int strSize = str.size();
	vector<int> result;
	for(int i = 0; i < strSize; ++i)
	{
		if(isCharVowel(str[i]))
		{
			result.push_back(i);
		}
	}

	return result;
}

int main()
{
	string s, t;

	getline(cin, s);
	getline(cin, t);

	if(s.size() != t.size())
	{
		cout << "No" << endl;

		cin.get();
		return 0;
	}

	vector<int> sVowels = amountOfVowels(s);
	vector<int> tVowels = amountOfVowels(t);

	if(sVowels.size() != tVowels.size())
	{
		cout << "No" << endl;

		cin.get();
		return 0;
	}

	for(int i = 0; i < sVowels.size(); ++i)
	{
		if(sVowels[i] != tVowels[i])
		{
			cout << "No" << endl;

			cin.get();
			return 0;
		}
	}

	cout << "Yes" << endl;
	

	cin.get();

    return 0;
}

