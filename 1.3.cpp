#include <bits/stdc++.h>
using namespace std;

// Complexity
// Time: O(n)
// Space: O(n)

string URLify(string s1)
{
    string s2 = "";
    for(auto c : s1)
    {
        if(c == ' ')
        {
            s2.push_back('%');
            s2.push_back('2');
            s2.push_back('0');
        }
        else
        {
            s2.push_back(c);
        }
    }
    return s2;
}

// Complexity
// Time: O(n)
// Space: O(1)

string URLify(string s1)
{
    int r = s1.size()-1;
    int l = 0;
    for(int x=r;x>=0;x--)
    {
        if(s1[x] != ' ')
        {   
            l = x;
            break;
        }
    }
    for(int x=l;x>=0;x--)
    {
        if(s1[x] != ' ')
        {
            s1[r--] = s1[x];
        }
        else
        {
            s1[r--] = '0';
            s1[r--] = '2';
            s1[r--] = '%';
        }
    }
    return s1;
}

int main()
{
    string s1 = "Mr John Smith    ";
    cout << URLify(s1);
    return 0;
}