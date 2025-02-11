#include <iostream>
using namespace std;
int main()
{
    int sifat[] = {1, 2, 3};
    int n = 3;
    int i;

    cout << "Array Before the deletion:" << endl;

    for (i = 0; i < sizeof(sifat) / sizeof(sifat[0]); i++)
    {
        cout << "sifat[" << i << "] =" << sifat[i] << endl;
    }

    for (i = 1; i < n; i++)
    {
        sifat[i] = sifat[i + 1];
        n = n - 1;
    }
    for (i = 0; i < n; i++)
    {
        cout << "sifat[" << i << "] =" << sifat[i] << endl;
    }

    return 0;
}