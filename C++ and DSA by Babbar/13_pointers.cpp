#include <iostream>
using namespace std;

void print(int *p)
{
    cout << p << endl;
}

int main()
{
    // int i = 5;
    // int *p = &i;

    // cout<<endl<<p<<endl<<i<<endl<<*p<<endl;
    // cout<<endl<<++p<<endl<<i++<<endl<<*p<<endl;

    // int **q = &p;

    // cout<<endl<<q<<endl<<*q<<endl<<**q<<endl;
    // cout<<*(q+1)<<endl<<*q+1<<endl<<**(q+1)<<endl<<q+1<<endl<<**q+1<<endl;

    // int arr[] = {12, 3, 2, 2134, 23, 12};
    // int *p1 = arr;

    /*
    cout << arr << endl;
    cout << arr + 1 << endl;
    cout << *(arr) << endl;
    cout << *(arr + 1) << endl;
    cout << arr + 2 << endl;
    cout << *(arr + 2) << endl;
    */

    /*
    cout << p1 << endl;
    cout << p1 + 1 << endl;
    cout << *(p1) << endl;
    cout << *(p1 + 1) << endl;


    cout << sizeof(arr) << endl;
    cout << sizeof(p1) << endl;

    */

    // FORMULA

    // arr[i] *(arr + i)  or i[arr] = *(i+arr)

    /*
    char ch[6] = "aryan";

    char *ptr = &ch[0];

    char ch1 = '2';

    char *ptr1 = &ch1;

    cout << ptr1 << endl;
    cout << *ptr1 << endl;

    cout << ch << endl;
    cout << ptr << endl;

    */

    int value = 5;
    int *p = &value;

    // print(p);

    int **q = &p;

    cout << **q << endl;
    cout << *q << endl;
    cout << q << endl;

    return 0;
}