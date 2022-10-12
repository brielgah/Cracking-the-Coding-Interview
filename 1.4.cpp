#include <bits/stdc++.h>
using namespace std;

// Complexity
// Time: O(n)
// Space: O(27)
// Leetcode Link: https://leetcode.com/problems/palindrome-permutation/submissions/
bool checkPalindromePermutation(string &s1)
{
    unordered_map<char,int> letterCount;
    for(auto c : s1)
    {
        if(c != ' ')
            letterCount[c]++;
    }
    bool oddCount = false;
    for(auto letter: letterCount)
    {

        if(letter.second%2 != 0)
        {
            if(oddCount)
                return false;
            oddCount = true;
        }
    }
    return true;
}