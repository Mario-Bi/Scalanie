#include <iostream>
#include <vector>
#include "MergeSort.h"

int main()
{
    MergeSort<int> sorterInt;
    MergeSort<double> sorterDouble;

    std::vector<int> arrayInt = { 5, 3, 8, 1, 2 };
    std::vector<double> arrayDouble = { 3.1, 2.4, 5.5, 1.0 };

    sorterInt.sort(arrayInt);
    sorterDouble.sort(arrayDouble);

    std::cout << "Posortowana tablica int: ";
    for (int x : arrayInt)
        std::cout << x << " ";

    std::cout << "\nPosortowana tablica double: ";
    for (double x : arrayDouble)
        std::cout << x << " ";

    std::cout << std::endl;
    return 0;
}