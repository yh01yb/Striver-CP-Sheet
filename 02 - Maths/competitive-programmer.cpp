#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;

        int even=0;
        int sum=0;
        int zeros=0;

        for(char c: s){
            int d = c - '0';
            sum+=d;
            if(d==0) zeros++;
            if(d%2==0) even++;
        }
        if(zeros>=1 && sum%3==0 && even>=2){
            cout<<"red"<<endl;
        }else{
            cout<<"cyan"<<endl;
        }
    }
    return 0;
}
