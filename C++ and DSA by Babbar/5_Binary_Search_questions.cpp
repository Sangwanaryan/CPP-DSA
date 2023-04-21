#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            end = mid - 1;
            ans = mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n;

    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            start = mid + 1;
            ans = mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 3, 5};

    int index1 = firstOccurence(arr, 8, 3);
    int index2 = lastOccurence(arr, 8, 3);

    cout << index1 << "  " << index2 << endl;

    return 0;
}