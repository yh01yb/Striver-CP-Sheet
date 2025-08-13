#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n>2){
            cout<<((n-2+x-1)/x)+1<<endl; //first subtract the 2 appartments on the first floor then use the ceiling formula i.e n+x-1/x

        }else{
            cout<<1<<endl;
        }
    }
    return 0;
}
