#include <iostream>
using namespace std;

int main() {
    int n, k, x, cnt = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (5 - x >= k)
            cnt++;
    }

    cout << cnt / 3;
}