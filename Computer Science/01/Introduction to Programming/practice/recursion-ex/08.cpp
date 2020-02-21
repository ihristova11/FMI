#include <iostream>

using namespace std;

double calc(int n, int c)
{
	if (c == 0)
	{
		return n;
	}

	return 1 + (1.0 / calc(n, c - 1));
}

int main()
{
	int n, x;
	cin >> n >> x;
	cout << calc(n, x);

	return 0;
}