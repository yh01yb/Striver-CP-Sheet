#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int side=max(max(a,b), min(a,b)*2);
        cout <<side*side<<endl;
    }
}
