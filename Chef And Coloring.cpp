#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int t;
    cin>>t;
    while(t--){
        ll int n,r=0,g=0,b=0,i,maxim;
        string str;
        cin>>n>>str;
        for(i=0;i<n;i++){
            if(str[i]=='R')r++;
            else if(str[i]=='G')g++;
            else b++;
        }
        maxim = max(max(r,g),b);
        cout<<n-maxim<<endl;
    }
}
