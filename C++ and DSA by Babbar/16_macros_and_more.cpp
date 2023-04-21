#include "bits/stdc++.h"
using namespace std;

int firstOccurecne(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size();
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (nums[mid] == target)
        {
            e = mid - 1;
            ans = mid;
            return ans;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurecne(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size();
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (nums[mid] == target)
        {
            s = mid + 1;
            ans = mid;
            return ans;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

//  #define PI 3.14; // MACROS CREATED

int main()
{
    /*
     int r = 2;

     double area;

     area = PI * r * r;
     */

    return 0;
}