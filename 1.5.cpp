#include <bits/stdc++.h>
using namespace std;
// This can work for n movements
// Complexity
// Time: O(2*min(s1,s2)) size of the strings
// Space: O(n) n = movements

bool deleteCharMovement(string s1, string s2, int mini, int countDelete, int i, int j)
{
    if (countDelete > 1)
        return false;
    while (min(i, j) < mini)
    {
        if (s1[i++] != s2[j++])
            return deleteCharMovement(s1, s2, mini, countDelete + 1, i + 1, j) || deleteCharMovement(s1, s2, mini, countDelete + 1, i, j + 1);
    }
    return true;
}

bool oneAway(string s1, string s2)
{
    if (abs((int)s1.size() - (int)s2.size()) > 1)
        return false;
    if (s1.size() != s2.size())
    {
        int mini = min(s1.size(), s2.size());
        return deleteCharMovement(s1, s2, mini, 0, 0, 0);
    }
    else
    {
        int differentChar = 0;
        for (int x = 0; x < s1.size(); x++)
        {
            if (differentChar > 1)
                return false;
            if (s1[x] != s2[x])
                differentChar++;
        }
    }
    return true;
}

int main()
{
    vector<string> s1 = {
                       "pale", "pales", "pale", "pale"},
                   s2 = {"ple", "pale", "bale", "bake"};
    for (int x = 0; x < s1.size(); x++)
        cout << oneAway(s1[x], s2[x]);
}