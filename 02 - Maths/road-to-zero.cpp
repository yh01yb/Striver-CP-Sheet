// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long x,y,a,b;
//         cin>>x>>y;
//         cin>>a>>b;
//         if(2*a>b){
//             int minm = min(x,y);
//             int sum=0;
//             sum=minm*b;
//             int sumtwo= abs(x-y)*a;
//             cout<<sum+sumtwo<<endl;
//         }else{
//             int r = x+y;
//             cout<<(r*a)<<endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        if (2 * a < b) b = 2 * a;
        cout << min(x, y) * b + abs(x - y) * a << "\n";
    }
}
