#include <iostream>

using namespace std;

int minDigit(int n)
{
	int min;
	if (n < 10)
	{
		return n;
	}

	return n % 10 + minDigit(n / 10);
}

int main()
{
	int n;
	cin >> n;
	cout << minDigit(n) << endl;

	return 0;
}