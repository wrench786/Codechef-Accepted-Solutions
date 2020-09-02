#include<iostream>

int main()
{
    int n,k,x,ans=0;
    std::cin>>n>>k;
    while(n--){
        std::cin>>x;
        if(x%k==0){
            ans++;
        }
    }
    std::cout<<ans<<std::endl;
}
