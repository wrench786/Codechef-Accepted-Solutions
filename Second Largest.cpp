#include<iostream>

int main()
{
    int n,a,b,c;
    std::cin>>n;
    while(n--){
        std::cin>>a>>b>>c;
        if(a>=b && a<=c || a>=c && a<=b){
            std::cout<<a<<std::endl;
        }
        else if(b>=a && b<=c || b>=c && b<=a){
            std::cout<<b<<std::endl;
        }
        else{
            std::cout<<c<<std::endl;
        }
    }

}
