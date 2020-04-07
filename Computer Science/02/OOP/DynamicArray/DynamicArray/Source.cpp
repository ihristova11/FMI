#include <iostream>
#include "DynamicArray.cpp"

int main()
{
	DynamicArray<int> arr;

	arr.push_back(6)
		.push_back(4)
		.push_back(2)
		.push_back(22);
	arr.pop_back();
	arr.insert(1, 8);
	arr[0] = 15;
	//arr.insert(12, 0); // throws an exception

	for (size_t i = 0; i < arr.get_size(); i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}