#include <iostream>
#include <cstring> 
using namespace std;
extern int main() {
    double originalArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = sizeof(originalArray) / sizeof(originalArray[0]);
    double* duplicatedArray = duplicateArray(originalArray, size);
    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << originalArray[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Duplicated array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << duplicatedArray[i] << " ";
    }
    std::cout << std::endl;
    delete[] duplicatedArray;

    return 0;
}