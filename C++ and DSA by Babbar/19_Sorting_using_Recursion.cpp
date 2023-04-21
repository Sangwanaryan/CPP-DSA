#include <iostream>
using namespace std;

void selectionSort(int arr[], int n, int i)
{
    int minIndex = i;

    if (minIndex >= n)
        return;

    for (int j = i + 1; j < n; j++)
    {
        if (arr[minIndex] > arr[j])
            minIndex = j;
    }

    swap(arr[minIndex], arr[i]);

    selectionSort(arr, n, i + 1);
}

int main()
{
    // SELECTION SORT

    int arr[] = {64, 25, 12, 12, 11,199,27,15,10,12,212};

    selectionSort(arr, 11, 0);

    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}