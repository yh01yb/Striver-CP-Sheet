#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    if (k % 10 == r || k % 10 == 0) {
        cout << 1;
        return 0;
    } 
    for (int i = 1;; i++) {
        int x = k * i;
        if (x % 10 == 0 || x % 10 == r) {
            cout << i;
            break;
        }
    }
    return 0;
}
