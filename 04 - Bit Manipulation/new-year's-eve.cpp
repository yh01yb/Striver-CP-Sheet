#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (k == 1) {
        cout << n;
    } else {
        long long x = 1;
       
        while (x <= n) {
            x = x * 2;
        }
        cout << (x - 1);
    }

    return 0;
}
