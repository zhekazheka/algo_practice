// 158_B.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	const int max = 4;
	int n = 0;
	int res = 0;
	vector<int> all;

	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		int tmp = 0;
		cin >> tmp;
		all.push_back(tmp);
	}

	sort(all.begin(), all.end());

	int a = 0, b = all.size() - 1;
	int currentGroupToDispatch = 0;
	bool isNextTaxi = true;
	while(a < b)
	{
		if(isNextTaxi)
		{
			currentGroupToDispatch = all[a] + all[b];
		}

		if(currentGroupToDispatch < max)
		{
			currentGroupToDispatch += all[++a];
			isNextTaxi = false;
		}
		else if(currentGroupToDispatch > max)
		{
			++res;
			--b;
			isNextTaxi = true;
		}
		else
		{
			++res;
			++a;
			--b;
			isNextTaxi = true;
		}
	}

	if(a == b)
	{
		++res;
	}

	cout << res << endl;

	cin.get();
	cin.get();

    return 0;
}

