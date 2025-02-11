#include <iostream>
using namespace std;
int main()
{
    int sifat[3], i;
    cout << "Array Before Insertion: " << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "sifat[" << i << "]=" << sifat[i] << endl;
    }
    cout << "Inserting elements.." << endl;
    cout << "Array after insertion:" << endl;
    for (i = 0; i < 5; i++)
    {
        sifat[i] = i + 2;
        cout << "sifat[" << i << "] = " << sifat[i] << endl;
    }

    return 0;
}