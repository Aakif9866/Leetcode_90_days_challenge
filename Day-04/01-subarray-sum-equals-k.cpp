#include <bits/stdc++.h>

using namespace std;

// totally wrong approach
// coz problem is slightly different
// solving for first time:
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        // isnt this classic 2 pointer

        int i = 0, j = 0;
        int n = nums.size();
        int sum = 0;
        int cnt = 0;

        while (j < n)
        {
            sum += nums[j];
            if (sum == k)
            {
                cnt++;
            }

            if (sum > k)
            {
                while (sum > k)
                {
                    sum -= nums[i];
                    i++;
                }
            }

            j++;
        }

        return cnt;
    }
};

// that is because this of negative elements present in the array
// need to prefix sum and some weird implementation to make it work

/*

______________________________________________________________________________________ ->> sum of s
___________________________________________ ___________________________________________
--> sum of s-k                              --> sum of k

we will try to find the no of times s-k came inorder to find the sum of k
because we cant find the midsum easily having exact value k
so its basically hashing at its core


*/

// 100 revisit

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();

        map<int, int> mp; // curr sum , freq

        mp[0] = 1; // some edge cases will work with this

        // pretty shaky
        // rewatch TUF tutorial

        int ans = 0;

        int sum = 0;
        int cnt = 0;

        for (auto it : nums)
        {
            int val = it;

            sum += val;

            int diff = sum - k;

            cnt += mp[diff];

            mp[sum]++; // last step
        }

        return cnt;
    }
};