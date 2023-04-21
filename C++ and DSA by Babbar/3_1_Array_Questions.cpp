#include "bits/stdc++.h"
using namespace std;

void swapAlternate(int a[], int n)
{
    for (int i = 0; i < n; i + 2)
    {
        if ((i + 1) < n)
        {
            swap(a[i], a[i + 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int unique(int a[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i];
    }
    return ans;
}

int main()
{
    // SWAP ALTERNATE

    int a[] = {1, 2, 3, 4, 5, 6, 7};
    swapAlternate(a, 7);

    // FIND UNIQUE

    int b[] = {7, 2, 5, 2, 5, 7, 4};

    int m = unique(b, 7);

    cout << endl;
    cout << m << endl;

    cout<<"Aryan Sangwan"<<endl;

    return 0;
}