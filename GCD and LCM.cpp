#include<iostream>


int gcdf(int a, int b){
    return b==0? a : gcdf(b, a%b);
}

int main()
{
    int t;
    std::cin>>t;
    while(t--){
        long long int a,b,gcd,lcm;
        std::cin>>a>>b;
        gcd = gcdf(a,b);
        lcm = (a*b)/gcd;
        std::cout<<gcd<<" "<<lcm<<std::endl;
    }
}
