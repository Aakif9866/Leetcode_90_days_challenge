#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // again
        // a very easy question

        // took inspiration from a previously done python version code

        vector<int> ans;
        int n = nums.size();
        map<int, int> mp; // value : index

        for (int i = 0; i < n; i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
            {
                return {i, mp[target - nums[i]]};
                // if found return
            }
            else
            {
                mp[nums[i]] = i;
                // if not found save in the damn map
            }
        }

        return ans;
    }
};