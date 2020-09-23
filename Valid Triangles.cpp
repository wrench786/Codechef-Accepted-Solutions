#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--){
        int a,b,c;
        std::cin>>a>>b>>c;
        (a+b+c==180)?
        std::cout<<"YES"<<std::endl:
        std::cout<<"NO"<<std::endl;
    }
}
