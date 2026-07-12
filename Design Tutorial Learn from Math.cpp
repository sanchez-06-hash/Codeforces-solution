//I built two solutions for this problem
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    int y = 12;
    int x = n - y;

    while (isPrime(x) || isPrime(y))
    {
        y++;
        x--;
    }

    cout << x << " " << y;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << 4 << " " << n - 4;
    else
        cout << 9 << " " << n - 9;

    return 0;
}