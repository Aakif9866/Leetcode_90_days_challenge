#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    // this is the easy code
    // hard code is much harder

    bool check(vector<vector<char>> &grid, int sr, int sc, int er, int ec)
    {

        set<char> s;
        for (int i = sr; i <= er; i++)
        {
            for (int j = sc; j <= ec; j++)
            {
                // in the whole code such changes are needed for its betterment

                // if(s.find(grid[i][j])==s.end()){
                //     return 0;
                // }else{
                //     s.insert(grid[i][j]);
                // }

                // below right code
                // up wrong code
                char ch = grid[i][j];
                if (ch == '.')
                    continue;
                if (s.count(ch))
                    return false;
                s.insert(ch);
            }
        }
        return 1;
    }
    bool isValidSudoku(vector<vector<char>> &grid)
    {
        // easy way of solving
        // will look at hard way later

        // row check
        for (int row = 0; row < 9; row++)
        {
            set<char> s;
            // row remains the same
            // column keeps on changing
            for (int col = 0; col < 9; col++)
            {
                char ch = grid[row][col];
                if (ch == '.')
                    continue;
                if (s.count(ch))
                    return false;
                s.insert(ch);
            }
        }

        // col check

        for (int col = 0; col < 9; col++)
        {
            set<int> s;
            for (int row = 0; row < 9; row++)
            {

                char ch = grid[row][col];
                if (ch == '.')
                    continue;
                if (s.count(ch))
                    return false;
                s.insert(ch);
            }
        }

        // grid check

        for (int i = 0; i < 9; i += 3)
        {
            for (int j = 0; j < 9; j += 3)
            {
                int ei = i + 2;
                int ej = j + 2;
                if (!check(grid, i, j, ei, ej))
                {
                    return 0;
                }
            }
        }

        return 1;
    }
};