#include "bits/stdc++.h"
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

void alternate(int arr[], int n)
{

    for (int i = 0; i < n; i + 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    // int n;
    // cin >> n;

    // Swap Alternate

    int arr[6] = {2, 3, 1, 6, 4, 7};

    alternate(arr, 6);
    printArray(arr, 6);

    cout << "Aryan SAngwan " << endl;

    return 0;
}