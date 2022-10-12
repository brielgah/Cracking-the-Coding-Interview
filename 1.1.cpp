#include <bits/stdc++.h>
using namespace std;
// Complexity
// Time: O(n) n size of s
// Space: O(k) k diferent chars of s
bool isUnique(string & s)
{
    unordered_map<char,int> appears;
    for(auto letter: s)
    {
        if(appears.find(letter) != appears.end())
            return false;
        appears[letter]++;
    }
    return true;
}
// Complexity
// Time: O(nlog n) n size of s
// Space: O(1)

bool isUnique(string & s)
{
    for(int x=1;x<s.size();x++)
    {
        if(s[x] == s[x-1])
            return false;
    }
    return true;
}
