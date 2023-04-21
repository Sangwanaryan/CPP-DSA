#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Deimal to Binary

    // int n;
    // cin >> n;

    // int ans = 0, digit = 0;
    // int i = 0;
    // while (n != 0)
    // {
    //     digit = n % 2;
    //     ans = digit * pow(10, i) + ans;
    //     n = n / 2;
    //     i++;
    // }
    // cout << ans << endl;

    // Binary to Decimal

    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    int digit = 0;
    while (n != 0)
    {
        digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << ans << endl;

        return 0;
}