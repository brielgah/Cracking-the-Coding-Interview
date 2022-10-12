#include <bits/stdc++.h>
using namespace std;
// Complexity
// Time: O(n*max(count))
// Complexity: O(n)
void insertCharacters(string &s, char letter, int count)
{
    s.push_back(letter);
    string number = to_string(count);
    for (auto num : number)
        s.push_back(num);
}

string stringCompression(string s1)
{
    string s2 = "";
    char letter = s1[0];
    int count = 1;
    for (int x = 1; x < s1.size(); x++)
    {
        if (letter != s1[x])
        {
            insertCharacters(s2, letter, count);
            letter = s1[x];
            count = 1;
        }
        else
        {
            count++;
        }
    }
    insertCharacters(s2, letter, count);
    if (s2.size() > s1.size())
        return s1;
    return s2;
}

int main()
{
    string s1 = "abcdefgg";
    cout << stringCompression(s1);
}