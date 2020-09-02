#include<iostream>
#include<iomanip>

int main()
{
    int x;
    float y;
    std::cin>>x>>y;
    if(x%5==0 && (float)x+0.50<=y){
        std::cout<<std::fixed<<std::setprecision(2)<<y - 0.50 - (float)x<<std::endl;
    }
    else{
        std::cout<<std::fixed<<std::setprecision(2)<<y<<std::endl;
    }
}
