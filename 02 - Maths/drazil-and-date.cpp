#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, s;
    cin >> a >> b >> s;

    int ans = abs(a) + abs(b);

    if (s >= ans && (s - ans) % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
