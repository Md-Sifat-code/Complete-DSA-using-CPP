#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> vec;

    // Adding elements to the vector
    vec.push_back(10); // Adds 10 at the end
    vec.push_back(20); // Adds 20 at the end
    vec.push_back(30); // Adds 30 at the end

    // Printing elements of the vector
    cout << "Elements in the vector:" << endl;
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Removing last element
    vec.pop_back();  // Removes the last element (30)

    // Printing elements after removing
    cout << "Elements after popping one:" << endl;
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Accessing an element using an iterator
    cout << "First element using iterator: " << *vec.begin() << endl;

    return 0;
}
