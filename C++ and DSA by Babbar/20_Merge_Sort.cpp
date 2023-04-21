#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int s, int e)
{
    if (s >= e)
        return;
}

void mergeSort(int arr[], int n, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;

    mergeSort(arr, n, s, mid);

    mergeSort(arr, n, mid + 1, e);

    Merge(arr, s, e);
}

int main()
{
    int arr[] = {21, 32, 34, 5, 23, 54, 423, 109};

    return 0;
}