#include<iostream>

using namespace std;

double ermit(double x, int n)
{
	if (n == 0)
	{
		return 1;
	}

	if (n == 1)
	{
		return 2.0 * x;
	}

	return 2.0 * x * ermit(x, n - 1) + 2.0 * (n - 1) * ermit(x, n - 2);
}

int main()
{
	double x;
	int n;
	cin >> x >> n;

	cout << ermit(x, n)<<endl;

	return 0;
}