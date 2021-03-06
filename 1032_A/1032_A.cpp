// 1032_A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h> 

using namespace std;


int main()
{
	int n = 0, k = 0;
	int a[101] = {0};

	int typesOfUtensils = 0;
	int maxDishes = 0;

	cin >> n >> k;

	int u = 0;
	for(int i = 0; i < n; ++i)
	{
		cin >> u;

		if(a[u] == 0)
		{
			++typesOfUtensils;
		}

		++a[u];

		int newMax = ceil((float)a[u] / k);
		if(newMax > maxDishes)
		{
			maxDishes = newMax;
		}
	}

	int result = (typesOfUtensils * maxDishes * k) - n;

	cout << result << endl;

    return 0;
}

