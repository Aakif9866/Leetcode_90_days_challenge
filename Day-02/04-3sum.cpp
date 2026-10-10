#include <bits/stdc++.h>

using namespace std;

// just an extra question for my coverage and practice

// brute
//  solves 311/316 test cases
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        set<vector<int>> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {

                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        vector<int> temp = {
                            nums[i], nums[j], nums[k]};

                        sort(temp.begin(), temp.end());
                        ans.insert(temp);
                    }
                }
            }
        }

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};

// better and optimal:

class Solution
{
public:
    void check(int target, vector<int> &nums, int start,
               vector<vector<int>> &ans)
    {

        int n = nums.size();
        int i = start;
        int j = n - 1;

        while (i < j)
        {
            int sum = nums[i] + nums[j];

            if (sum == target)
            {
                ans.push_back({nums[start - 1], nums[i], nums[j]});

                i++;
                j--;

                // Skip duplicates after finding a valid triplet
                while (i < j && nums[i] == nums[i - 1])
                {
                    i++;
                }

                while (i < j && nums[j] == nums[j + 1])
                {
                    j--;
                }
            }
            else if (sum > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();

        if (n < 3)
        {
            return {};
        }

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++)
        {

            // Skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }

            // Optional optimization
            if (nums[i] > 0)
            {
                break;
            }

            int target = -nums[i];
            check(target, nums, i + 1, ans);
        }

        return ans;
    }
};
