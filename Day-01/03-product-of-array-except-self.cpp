#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {

        // was able to solve on my own
        // after a little introspection

        long long prod = 1;
        int n = nums.size();
        int o_possible = 0;
        for (auto it : nums)
        {
            if (it == 0)
            {
                o_possible++;
                continue; // to aviod 0 products
            }

            prod = prod * it;
        }

        // now the product is ready

        // if 0 possible > 1 --> return all 0s
        // else 1 0
        vector<int> ans(nums.size(), 0);

        if (o_possible > 1)
        {
            return ans;
        }

        if (o_possible == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == 0)
                {
                    ans[i] = prod;
                }
                else
                {
                    ans[i] = 0;
                }
            }
            return ans;
        }

        for (int i = 0; i < n; i++)
        {
            ans[i] = prod / nums[i];
        }

        return ans;
    }
};