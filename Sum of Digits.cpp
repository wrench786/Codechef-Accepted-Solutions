#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    while(n--){
        int x,ans=0;
        std::cin>>x;
        while(x>9){
            ans+=x%10;
            x/=10;
        }
        ans+=x;
        std::cout<<ans<<std::endl;
    }
}
