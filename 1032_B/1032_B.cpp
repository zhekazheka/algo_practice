// 1032_B.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>
#include <math.h> 
#include <iostream>

using namespace std;


int main()
{
	const int maxRows = 5, maxColumns = 20;
	string s;

	cin >> s;

	int size = s.size();

	int minReqRows = 0;
	int charsPerRow = 0;
	do
	{
		if(++minReqRows > maxRows)
		{
			cout << "Error" << endl;
			return 0;
		}

		charsPerRow = ceil(size / (float)minReqRows);

	} while(charsPerRow > maxColumns);

	int reqAsterisks = charsPerRow * minReqRows - size;
	int asterisksPerRow = ceil(reqAsterisks / (float)minReqRows);
	int charIndex = 0;

	cout << minReqRows << " " << charsPerRow << endl;

	for(int i = 0; i < minReqRows; ++i)
	{
		int asterisksOnRow = 0;
		if(reqAsterisks > 0)
		{
			if(reqAsterisks >= asterisksPerRow)
			{
				asterisksOnRow = asterisksPerRow;
			}
			else
			{
				asterisksOnRow = reqAsterisks;
			}

			reqAsterisks -= asterisksPerRow;
		}

		for(int j = 0 + charsPerRow * i; j < charsPerRow * i + charsPerRow; ++j)
		{
			if(asterisksOnRow-- > 0)
			{
				cout << "*";
			}
			else
			{
				cout << s[charIndex++];
			}
		}

		cout << "\n";
	}

	cout << endl;

	cin.get();
	cin.get();

    return 0;
}

