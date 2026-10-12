#include <bits/stdc++.h>

using namespace std;

// directly tried for DP and failed
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        // went through old code
        // 1 round of understanding
        // and old code
        // need to revise once again

        set<int> st(nums.begin(), nums.end());
        int ans = 0;

        for (auto it : st)
        {
            // very good point
            // understand properly
            if (st.find(it - 1) != st.end())
            {
                continue;
            }

            int cnt = 1;
            int val = it;

            while (st.find(val + 1) != st.end())
            {
                // val + 1 -->> this is right
                // keeping val -->> error I faced
                val++;
                cnt++;
            }
            ans = max(cnt, ans);
        }

        return ans;
    }
};