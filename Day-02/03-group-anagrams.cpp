#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        // this was a totally alien question for me
        // though I've solved this before in June 2025

        // using the same approach that I've used at that time
        // very similar to valid anagram
        // very effective way of solving the problem

        map<string, vector<string>> mp;
        for (auto it : strs)
        {
            string t = it;
            sort(t.begin(), t.end());

            mp[t].push_back(it);
        }

        vector<vector<string>> ans;

        for (auto it : mp)
        {
            ans.push_back(it.second);
        }

        return ans;
    }
};