#include "bits/stdc++.h"
#include "vector"
using namespace std;

void reverse(int i, int j, string &s)
{
    if (i > j)
        return;

    swap(s[i], s[j]);
    i++;
    j--;
    reverse(i, j, s);
}

void Reverse(int i, string &s)
{
    if (s.length() / 2 <= i)
    {
        return;
    }

    swap(s[i], s[s.length() - 1 - i]);
    i++;

    Reverse(i, s);
}

bool checkPalindrome(string s, int i, int j)
{
    if (i > j)
        return true;

    if (s[i] != s[j])
        return false;

    else
    {
        return checkPalindrome(s, i + 1, j - 1);
    }
}

bool Palindrome(int i, string s)
{
    if (s.length() / 2 <= i)
        return true;

    if (s[i] != s[s.length() - 1 - i])
        return false;

    else
    {
        return Palindrome(i + 1, s);
    }
}

int Power(int a, int b)
{
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    if (b % 2 == 0)
    {
        return Power(a, b / 2) * Power(a, b / 2);
    }

    else
    {
        return a * Power(a, b / 2) * Power(a, b / 2);
    }
}

vector<vector<string>> Subset(string s, int index, vector<int> output)
{
    vector<vector<string>> ans;

    if (index > s.size())
    {
        ans.push_back(output);
        return ans;
    }

    Subset(s, index + 1, output);

    int element = s[index];

    output.push_back(element);

    Subset(s, index + 1, output);
}

int main()
{
    // string s = "abddbba";

    // int a, b;
    // cin >> a >> b;

    // Reverse(0, s);
    // cout << s << endl;

    // cout << checkPalindrome(s, 0, s.length() - 1);

    // cout << Palindrome(0, s);

    // cout << Power(a, b);

    // POWER SUBSET

    string a = "abc";

    return 0;
}