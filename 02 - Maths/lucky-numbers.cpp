#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long total = 0;
    for (int i = 1; i <= n; ++i) {
        total += (1LL << i); // this equals to 2^i btw
    }

    cout << total << endl;
    return 0;
}
