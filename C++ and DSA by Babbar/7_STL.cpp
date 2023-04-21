#include "bits/stdc++.h"
using namespace std;

int main()
{
    /*

    VECTOR

    vector<int> v;
    // vector<int> a[5, 1];

    v.push_back(1);
    v.pop_back();
    v.clear();
    v.begin();
    v.end();

     vector<int> last[a];

    */

    /*

     DEQUEUE

    deque<int> d;

    d.push_back(1);
    d.pop_back();
    d.erase(d.begin(), d.begin() + 1);

    // LIST

    list<int> l;
    l.push_back(3);
    l.push_back(2);
    l.push_back(3);

    for (auto i : l)
    {
        cout << i << endl;
    }

    */

    /* STACK

    stack<string> s;

    s.push("Aryan");
    s.push("Sangwan");
    s.push("Chaudhary");

    s.top();
    s.pop();
    s.top();

    */

    // QUEUE

    queue<string> q;

    // REVERSE OF STACK

    /*

     PRIORITY QUEUE

    priority_queue<int> p; // MAX HEAP

    priority_queue<int, vector<int>, greater<int>> m; // MIN HEAP

    cout << p.top();

    */

    /*

     SET

    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(2);

    for (auto i : s)
        cout << i << endl;

    s.count(5);

    s<int>::iterator itr = s.find(5);

    */

    // MAP

    // KEY : VALUE

    map<int, string> m;

    m[1] = "aryan";
    m[2] = "sangwan";
    m[3] = "chaudhary";

    for (auto i : m)
    {
        cout << i.first << endl;
        cout << i.second << endl;
    }

    m.erase(13);
    m.find(5);

    // ALGORITHMS

    binary_search(v.beign(), v.end(), 7);

    lower_bound(v.begin(), v.end(), 6) - v.begin();

    upper_bound(v.begin(), v.end(), 6) - v.begin();

    // max, swap, sort, min, reverse, rotate

    return 0;
}