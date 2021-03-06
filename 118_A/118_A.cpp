// 118_A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	vector<char> result;
	string s;
	char vowels[] = { 'a', 'o', 'y', 'e', 'u', 'i' };
	int vowelsSize = 6;

	cin >> s;

	std::transform(s.begin(), s.end(), s.begin(), ::tolower);

	for(int i = 0; i < s.size(); ++i)
	{
		bool bIsVowel = false;

		for(int j = 0; j < vowelsSize; ++j)
		{
			if(s[i] == vowels[j])
			{
				bIsVowel = true;
				break;
			}
		}

		if(!bIsVowel)
		{
			result.push_back('.');
			result.push_back(s[i]);
		}
	}

	for(vector<char>::const_iterator it = result.begin(); it != result.end(); ++it)
	{
		cout << *it;
	}

	cout << endl;

    return 0;
}

