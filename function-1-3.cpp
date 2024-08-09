#include <iostream>
#include <cstring> 
double* duplicateArray(double* array, int size) {
    double* newArray = new double[size];
    std::memcpy(newArray, array, size * sizeof(double));
    return newArray;
}