// 393_A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>
#include <math.h> 
#include <iostream>

using namespace std;


int main()
{
	string s;
	int charAmounts[4] = { 0 };
	int reqAmount[4] = { 2, 1, 3, 1 };
	int res = 1000000;

	cin >> s;

	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i] == 'n')
		{
			++charAmounts[0]; // n
		}
		else if(s[i] == 'i')
		{
			++charAmounts[1]; // i
		}
		else if(s[i] == 'e')
		{
			++charAmounts[2]; // e
		}
		else if(s[i] == 't')
		{
			++charAmounts[3]; // t
		}
	}

	if(charAmounts[0] % 2 == 0)
	{
		--charAmounts[0];
		if(charAmounts[0] < 0)
		{
			charAmounts[0] = 0;
		}
	}

	for(int i = 0; i < 4; ++i)
	{
		int newMin = floor(charAmounts[i] / (double)reqAmount[i]);
		if(newMin < res)
		{
			res = newMin;
		}
	}

	cout << res << endl;

	cin.get();
	cin.get();

    return 0;
}

