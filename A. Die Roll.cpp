#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;

    int x = max(y, w);

    int up = 6 - x + 1;
    int down = 6;

    int g = gcd(up, down);

    up /= g;
    down /= g;

    cout << up << "/" << down;

    return 0;
}