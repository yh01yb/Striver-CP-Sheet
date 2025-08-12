#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        long long x, y; cin >> x >> y;
        if (x >= y || x > 3) cout << "YES\n";
        else if (x == 1) cout << "NO\n";
        else if (x == 2) cout << (y == 3 ? "YES\n" : "NO\n");
        else cout << (y <= 3 ? "YES\n" : "NO\n");
    }
}
