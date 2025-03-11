#include <iostream>

template <typename T>
void iter(T* array, int length, void(*func)(T&))
{
    for (int i = 0; i < length; i++)
        func(array[i]);
}

template <typename T>
void printInt(T &x)
{
    std::cout << x << " ";
}


template <typename T>
void increment(T& x)
{
    x++;
}

template <typename T>
void multiply(T& x)
{
    x*=3;
}
