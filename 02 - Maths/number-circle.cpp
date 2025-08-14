#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>a(n);
    for(int &x:a) cin>>x;
    sort(a.begin(),a.end());
    if(a[n-1] >= a[n-2] + a[n-3]) cout<<"NO";
    else{
        cout<<"YES\n";
        swap(a[n-1],a[n-2]);
        for(int x:a) cout<<x<<" ";
    }
}
