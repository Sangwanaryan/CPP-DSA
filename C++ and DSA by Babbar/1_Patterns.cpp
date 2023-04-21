#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     int value = row;
    //     while (col <= row)
    //     {
    //         cout << row + col - 1;

    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + col - 1;
    //         cout << ch << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + row + col - 2;
    //         cout << ch << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = n;
    //     while (col >= row)
    //     {
    //         cout << "*";
    //         col--;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // while (row <= n)
    // {

    //     int space = row - 1;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int star = n - row + 1;
    //     while (star)
    //     {
    //         cout << "*";
    //         star--;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // while (row <= n)
    // {
    //     int space = row - 1;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int col = n - row + 1;
    //     while (col)
    //     {
    //         cout << row;
    //         col--;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // while (row <= n)
    // {
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << row;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int row = 1;
    // while (row <= n)
    // {
    //     int space = row - 1;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }

    //     int col = n - row + 1;
    //     int no = row;
    //     while (col)
    //     {
    //         cout << no;
    //         no = no + 1;
    //         col--;
    //     }
    //     cout << endl;
    //     row++;
    // }

    int row = 1;
    while (row <= n)
    {
        int no1 = 1;

        while (no1 <= (n - row + 1))
        {
            cout << no1;
            no1++;
        }

        int star = 2 * (row - 1);
        while (star)
        {
            cout << "*";
            star--;
        }

        int no2 = n - row + 1;
        while (no2)
        {
            cout << no2;
            no2--;
        }
        cout << endl;
        row++;
    }

    return 0;
}