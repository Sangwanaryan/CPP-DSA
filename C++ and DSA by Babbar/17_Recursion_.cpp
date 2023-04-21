#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

void sayDigits(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }

    int Digit = n % 10;
    n = n / 10;

    sayDigits(n, arr);

    cout << arr[Digit] << endl;
}

bool binarySearch(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;

    if (s > e)
        return false;

    if (arr[mid] == key)
        return 1;

    if (arr[mid] < key)
        return binarySearch(arr, mid + 1, e, key);

    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int sum(int arr[],int n){
    if()
}

int main()
{
    int n;
    cin >> n;

    string arr[10] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
    };

    // cout << fib(n);

    // cout << fact(n);

    // cout << endl;

    // sayDigits(n, arr);

    // cout << endl;

    int arr1[n] = {2, 4, 6, 9, 10, 13, 25};

    // cout << binarySearch(arr1, 0, 6, 12);

    sum(arr,7);

    return 0;
}