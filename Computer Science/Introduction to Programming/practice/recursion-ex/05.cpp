#include <iostream>

using namespace std;

int minDigit(int n)
{
	int min;
	if (n < 10)
	{
		return n;
	}

	min = minDigit(n / 10);

	if (min > n % 10)
	{
		return n % 10;
	}

	return min;
}

int main()
{
	int n;
	cin >> n;
	cout << minDigit(n) << endl;

	return 0;
}