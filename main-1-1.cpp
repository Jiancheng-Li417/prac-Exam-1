#include <iostream>
#include <limits>
using namespace std;
extern int main() {
    double arr[] = {3.5, 2.1, 4.7, -1.2, 0.0};
    int size = sizeof(arr) / sizeof(arr[0]);

    double minValue = arrayMin(arr, size);

    std::cout << "The minimum value in the array is: " << minValue << std::endl;

    return 0;
}