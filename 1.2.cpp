#include <bits/stdc++.h>
using namespace std;
// Complexity
// Time: O(n) n size of s
// Space: O(n) 
bool checkPermutation(string& s1,string& s2)
{
    if(s1.size() != s2.size())
        return false;
    unordered_map<char,int> appearsS1;
    for(auto letter: s1)
        appearsS1[letter]++;
    for(auto letter: s2)
    {
        if(appearsS1.find(letter) == appearsS1.end())
            return false;
        if(appearsS1[letter] == 0)
            return false;
        appearsS1[letter]--;
    }      
    for(auto letter: appearsS1)
    {
        if(letter.second > 0)
            return false;
    }
    return true;
}
 
// Complexity
// Time: O(nlogn) n size of s)
// Space: O(n)

bool checkPermutation(string & s1,string & s2)
{
    if(s1.size() != s2.size())
        return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1 == s2;
}

// Complexity
// Time: O(n*n!)
// Space: O(n!)

void makePermutation(string s,int l,int r,vector<string> &permutations)
{
    if(l == r)
    {
        permutations.push_back(s);
        return;
    }
    for(int i=l;i<=r;i++)
    {
        swap(s[l],s[i]);
        cout << s << endl;
        makePermutation(s,l+1,r,permutations);
        swap(s[l],s[i]);
    }
}

bool checkPermutation(string &s1,string &s2)
{
    vector<string> permutations;
    makePermutation(s1,0,s1.size()-1,permutations);
    cout << permutations.size(); 
    for(auto item : permutations)
    {
        if(item == s2)
            return true;
    }
    return false;
}

int main()
{
    string s1 ="ABC";
    string s2 = "CBAA";
    cout << checkPermutation(s1,s2);
}


