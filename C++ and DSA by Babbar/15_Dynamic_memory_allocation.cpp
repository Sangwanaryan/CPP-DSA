#include <iostream>
using namespace std;

int main()
{
    new int;
    int *i = new int;

    delete i;

    // DYANAMIC MEMORY ALLOCATION OF ARRAYS

    /*
    int n;
    cin >> n;

    int *arr = new int[n];

    delete[] arr;
    */

    // DYANAMIC MEMORY ALLOCATION OF ARRAYS

    int n;
    cin >> n;

    int **arr = new int *[n];

    for (int i = 0; i < n; i++) // CREATION
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}