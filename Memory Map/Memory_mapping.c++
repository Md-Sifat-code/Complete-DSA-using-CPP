#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Declare and initialize an array

    // Base address of the array
    cout << "Base address: " << arr << endl;

    // Access each element using memory mapping
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << *(arr + i) << endl;
        cout << "Address of element: " << (arr + i) << endl;
    }

    return 0;
}
