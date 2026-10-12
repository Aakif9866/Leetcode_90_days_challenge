#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        // easy idea and basic implementataion
        // notihgn new
        map<int, int> mp;
        vector<int> ans;

        for (auto it : nums)
        {
            mp[it]++;
        }

        priority_queue<pair<int, int>> pq;
        // first value that matter is the freq must be maximum

        for (auto it : mp)
        {
            pq.push({it.second, it.first});
        }

        while (k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};