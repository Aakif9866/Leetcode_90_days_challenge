#include <bits/stdc++.h>

using namespace std;

// very easy nostalgic question
class Solution
{
public:
    bool isPalindrome(string s)
    {
        // first remove the unnecessay characters

        string news = "";
        for (auto it : s)
        {
            if (isupper(it))
            {
                news += tolower(it);
            }
            else if (islower(it) || isalnum(it))
            {
                news += it;
            }
            else
            {
                continue; // dont do anything
            }
        }

        if (news.size() == 0)
            return 1;

        int i = 0, j = news.size() - 1;
        while (i <= j)
        {
            if (news[i] != news[j])
            {
                return 0;
            }

            i++;
            j--;
        }

        cout << news << endl;

        return 1;
    }
};