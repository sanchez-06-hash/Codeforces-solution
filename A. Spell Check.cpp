#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string timur = "Timur";
    sort(timur.begin(), timur.end());

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (n != 5)
        {
            cout << "NO" << endl;
            continue;
        }

        sort(s.begin(), s.end());

        if (s == timur)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}