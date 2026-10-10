#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // lazy way
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
            return 1;

        return 0;

        // or there is the way to use 2 sets
        // nothing new learnt
    }
};