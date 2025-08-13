//optimal soln:
#include<iostream>
using namespace std;
 
int main(){
    int t; 
    cin>> t;
    while(t--){
 
        int n;
        cin>>n;
        if( n == 1 || n == 2){
            cout<<0<<"\n";
            
        }
        else if(n%2 ==0){
            cout<<(n/2)-1<<endl;
        } else{
            cout<<(n-1)/2<<endl;
        }
    }
    return 0;
}


//soln 2:
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t,n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         int a=0,b=0;
//         if(n>=3){
//              b=1;
//              a=n-b;
//              int ans=0;
//              while(a>b){
//                 ans++;
//                 b++;
//                 a--;
//              } 
//              cout<<ans<<endl;


//         }else{
//             cout<<0<<endl;
//         }

//     }
//     return 0;
// }
