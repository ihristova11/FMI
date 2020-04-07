#include "DynamicArray.h"

template<typename T>
DynamicArray<T>::DynamicArray() : elements(nullptr), size(0), capacity(0)
{ }

template<typename T>
DynamicArray<T>::DynamicArray(const size_t& c)
{
	this->size = 0;
	this->capacity = (c == 0) ? MinSize : c;
	this->elements = new T[this->capacity];
}

template<typename T>
DynamicArray<T>::DynamicArray(const DynamicArray& array)
{
	this->copy_internals(array);
}

template<typename T>
DynamicArray<T>::~DynamicArray()
{
	this->delete_internals();
}

template<typename T>
const T& DynamicArray<T>::operator[] (const size_t& index) const
{
	if (index < 0 || index >= this->size)
		throw "Index out of range!";

	return this->elements[index];
}

template<typename T>
T& DynamicArray<T>::operator[](const size_t& index)
{
	if (index < 0 || index >= this->size)
		throw "Index out of range!";

	return this->elements[index];
}

template<typename T>
DynamicArray<T>& DynamicArray<T>::operator= (const DynamicArray<T>& other)
{
	if (this != &other)
	{
		this->delete_internals();
		this->copy_internals(other);
	}

	return *this;
}

template<typename T>
DynamicArray<T>& DynamicArray<T>::push_back(const T& value)
{
	if (this->capacity <= this->size)
	{
		size_t temp_capacity = (this->capacity == 0) ? MinSize : this->capacity * CapacityFactor;
		this->reserve(temp_capacity);
	}

	this->elements[this->size] = value;
	++this->size;

	return *this;
}

template<typename T>
void DynamicArray<T>::pop_back()
{
	if (this->size <= 0)
		throw "Index out of range!";

	--this->size;
}

template<typename T>
void DynamicArray<T>::insert(const size_t& index, const T& element)
{
	if (index < 0 || index >= this->size)
		throw "Index out of range!";

	if (this->capacity <= this->size)
	{
		size_t temp_capacity = (this->capacity == 0) ? MinSize : this->capacity * CapacityFactor;
		this->reserve(temp_capacity);
	}

	for (size_t i = this->size; i > index; --i)
	{
		this->elements[i] = this->elements[i - 1];
	}

	this->elements[index] = element;
	++this->size;
}

template<typename T>
void DynamicArray<T>::reserve(const size_t& c)
{
	this->capacity += c;

	T* temp = new T[this->size];
	for (size_t i = 0; i < this->size; i++)
	{
		temp[i] = this->elements[i];
	}

	this->delete_internals();
	this->elements = new T[this->capacity];

	for (size_t i = 0; i < this->size; i++)
	{
		this->elements[i] = temp[i];
	}

	delete[] temp;
}

template<typename T>
bool DynamicArray<T>::empty() const
{
	return this->size == 0;
}

template<typename T>
size_t DynamicArray<T>::get_capacity() const
{
	return this->capacity;
}

template<typename T>
size_t DynamicArray<T>::get_size() const
{
	return this->size;
}

template<typename T>
void DynamicArray<T>::copy_internals(const DynamicArray<T>& other)
{
	this->capacity = other.capacity;
	this->size = other.size;

	this->elements = new T[this->capacity];

	for (size_t i = 0; i < this->size; i++)
	{
		this->elements[i] = other.elements[i];
	}
}

template<typename T>
void DynamicArray<T>::delete_internals()
{
	delete[] this->elements;
}
