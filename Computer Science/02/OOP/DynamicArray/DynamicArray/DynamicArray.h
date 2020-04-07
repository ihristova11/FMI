#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H
#define MinSize 1

#include <iostream>

template <typename T>
class DynamicArray
{
public:
	DynamicArray();
	DynamicArray(const size_t&);
	DynamicArray(const DynamicArray&);
	DynamicArray<T>& operator=(const DynamicArray&); // rule of 3/5
	~DynamicArray();

	T& operator[](const size_t&) const;

	DynamicArray<T>& push_back(const T&);
	void pop_back();
	void insert(const size_t&, const T&);
	void reserve(const size_t&);
	bool empty() const;

	// getters
	size_t get_capacity() const;
	size_t get_size() const;

	// friends
	friend std::ostream& operator << (std::ostream& out, const DynamicArray<T>& a);

private:
	T* elements;
	size_t size;
	size_t capacity;

	void copy_internals(const DynamicArray<T>& other);
	void delete_internals();
};

#endif // !DYNAMIC_ARRAY_H
