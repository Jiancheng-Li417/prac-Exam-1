#include <iostream>
#include <limits> 
double arrayMin(double* array, int size) {
    if (size <= 0) {
        return std::numeric_limits<double>::quiet_NaN();
    }
double minVal = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
    }

    return minVal;
}