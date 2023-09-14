#include <iostream>
#include <vector>

using namespace std;

int addArray(vector<int> x);

int addArray(vector<int> x)
{
	int sum = 0;

	for (int i = 0; i < x.size() - 1; i++)
	{
		sum += x[i];
	}

	return sum;
}