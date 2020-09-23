#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--){
        int n,ans=0;
        std::cin>>n;
        ans=n%10;
        if(n>0 && n<10){
            ans+=n;
        }
        else if(n>=10 && n<=99){
            ans+=n/10;
        }
        else if(n>=100 && n<=999){
            ans+=n/100;
        }
        else if(n>=1000 && n<=9999){
            ans+=n/1000;
        }
        else if(n>=10000 && n<=99999){
            ans+=n/10000;
        }
        else if(n>=100000 && n<=999999){
            ans+=n/100000;
        }
        else if(n>=1000000 && n<=9999999){
            ans+=n/1000000;
        }
        else if(n>=10000000 && n<=99999999){
            ans+=n/10000000;
        }
        std::cout<<ans<<std::endl;
    }
}
