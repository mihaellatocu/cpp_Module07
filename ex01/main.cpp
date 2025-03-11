#include "iter.hpp"

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << size << std::endl;

    iter(arr, size, printInt);
    iter(arr, size, increment);
    std::cout << "\n";
    iter(arr, size, printInt);
    std::cout << "\n";
    iter(arr, size, multiply);
    iter(arr, size, printInt);
    std::cout << "\n";

    char arr2[] = {'a', 'b', 'c', 'd' ,'e'};
    iter(arr2, size, printInt);
    iter(arr2, size, increment);
    std::cout << "\n";
    iter(arr2, size, printInt);
    std::cout << "\n";
    
    
    return (0);
}