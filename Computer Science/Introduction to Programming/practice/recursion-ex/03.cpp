#include <iostream>

using namespace std;

int sum(int start, int end, int step)
{
	int res;

	if (start > end)
	{
		return 0;
	}

	return start + sum(start + step, end, step);
}

int main()
{
	int n, k;
	cin >> n >> k;

	cout << sum(1, n, k) << endl;

	return 0;
}