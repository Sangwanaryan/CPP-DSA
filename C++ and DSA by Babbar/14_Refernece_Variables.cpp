#include "bits/stdc++.h"
using namespace std;

void update(int &i)
{
    i++;
}

int main()
{
    int i = 5;
    int &j = i;

    i++;
    j++;

    cout << i << endl;
    cout << j << endl;

    update(i);
    cout << i << endl;

    return 0;
}