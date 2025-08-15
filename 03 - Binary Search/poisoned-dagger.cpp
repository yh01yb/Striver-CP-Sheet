#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        long long h;
        cin>>n>>h;

        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

         long long left = 1, right = h, answer = h;

        while (left <= right) {
            long long k = (left + right) / 2;
            long long total_damage = 0;

            for (int i = 0; i < n - 1; i++) {
                total_damage += min(k, a[i + 1] - a[i]);
            }

            total_damage += k;

            if (total_damage >= h) {
                answer = k;
                right = k - 1;
            } else {
                left = k + 1;
            }
        }

        cout << answer << "\n";
    }
    return 0;
}
