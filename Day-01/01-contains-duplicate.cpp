#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> mp;
        for (auto it : nums)
        {
            mp[it]++;
            if (mp[it] > 1)
            {
                return 1;
            }
        }

        return 0;
    }
};