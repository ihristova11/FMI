#include<iostream>

using namespace std;

int mult(int m, int n)
{
	if (n == 1)
	{
		return m;
	}

	return m + mult(m, n - 1);
}


int main()
{
	int m, n;
	cin >> m >> n;

	cout << mult(m, n) << endl;

	return 0;
}