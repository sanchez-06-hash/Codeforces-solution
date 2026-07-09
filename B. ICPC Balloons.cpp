//this problem has two solution the first one using nested loops which dosen't make it the best solution(O(n^2)) the second one is O(n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<char> v;

        for (char c = 'A'; c <= 'Z'; c++)
            v.push_back(c);

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            auto it = find(v.begin(), v.end(), s[i]);

            if (it != v.end())
            {
                ans += 2;
                v.erase(it);
            }
            else
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
//the second 
bool vis[26] = {0};
int ans = 0;

for(char c : s)
{
    if(!vis[c - 'A'])
    {
        ans += 2;
        vis[c - 'A'] = true;
    }
    else
    {
        ans++;
    }
}