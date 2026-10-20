#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int l = 0, m = 0, h = nums.size() - 1;

        // l -> start pointers of 0s
        // m -> start pointers of 0s
        // m -> start pointers of 0s

        while (m <= h)
        {
            if (nums[m] == 0)
            {
                swap(nums[l], nums[m]);
                l++;
                m++;
            }
            else if (nums[m] == 1)
            {
                m++;
            }
            else
            {
                swap(nums[m], nums[h]);
                h--;
            }
        }
    }
};