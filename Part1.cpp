#include <iostream>
#include <vector>

using namespace std;

int addArray(vector<int> x);
int mulArray(vector<int> x);

int addArray(vector<int> x)
{
	int sum = 0;

	for (int i = 0; i < x.size() - 1; i++)
	{
		sum += x[i];
	}

	return sum;
}

int mulArray(vector<int> x)
{
	int product = 1; //start at 1 not 0 for multiplication

	for (int i = 0; i < x.size() - 1; i++)
	{
		product *= x[i];
	}

	return product;
}

