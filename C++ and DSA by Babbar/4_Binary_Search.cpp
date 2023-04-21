#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}

int main()
{
    int even[] = {3, 6, 8, 13, 21, 44};

    int odd[] = {2, 4, 7, 9, 13};

    int index = binarySearch(even, 6, 1);
    cout << index << endl;

    int index1 = binarySearch(odd, 5, 11);
    cout << index1 << endl;

    return 0;
}