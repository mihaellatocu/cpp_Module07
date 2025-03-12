#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T>
Array<T>::Array() : arr(NULL), length(0)
{
}

template <typename T>
Array<T>::Array(size_t n) : length(n), arr(new T[n])
{
	// length = n;
    // arr = new T[n]();
}

template <typename T>
Array<T>::Array(const Array& other)
{
	length = other.length;
    arr = new T[length];
	for (size_t i = 0; i < length; i++)
		arr[i] = other.arr[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array& other)
{
    if (this != &other)
	{
		delete[] arr;
		length = other.length;
		arr = new T[other.length];
		for (size_t i = 0; i < length; i++)
			arr[i] = other.arr[i];
	}
    return (*this);
}

template <typename T>
Array<T>::~Array()
{ 
	delete[] arr;
}

template <typename T>
size_t Array<T>::size() const
{
    return this->length;
}

template <typename T>
T& Array<T>::operator[](size_t index)
{
	if(index >= length)
		throw std::out_of_range("Index out of range");
	return (arr[index]);
}

#endif