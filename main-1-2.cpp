#include <iostream>
extern int main() {
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int size = sizeof(arr) / sizeof(arr[0]);

    double valueToAdd = 2.5;
    modifyArray(arr, size, valueToAdd);

    std::cout << "Modified array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}