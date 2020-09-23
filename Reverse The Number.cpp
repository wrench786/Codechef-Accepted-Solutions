#include<iostream>
#include<math.h>
#include<vector>


int main()
{
    int t;
    std::cin>>t;
    while(t--){
        int n,ans=0,i,k;
        std::cin>>n;
        std::vector<int>vec;
        while(n!=0){
            vec.push_back(n%10);
            n/=10;
        }
        int co = vec.size()-1;
        int x=1;
        while(co--){
          x*=10;
        }
        for(i=0,k=x;i<vec.size();i++,k/=10){
            ans+= vec[i]*k;
        }
        std::cout<<ans<<std::endl;
    }
}
