#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    cout << ((n + a - 1) / a) * ((m + a - 1) / a) << endl;
    return 0;
}

//ceil(n/a)×ceil(m/a) 

//  ceil(x/a)= x+a-1/a

//Let’s say x = 6, a = 4

// Regular division: 6 / 4 = 1.5

// Integer division: 6 / 4 = 1

// But ceiling: ceil(6 / 4) = 2

// Formula: (6 + 4 - 1) / 4 = 9 / 4 = 2 
