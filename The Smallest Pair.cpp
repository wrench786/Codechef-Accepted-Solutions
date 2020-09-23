#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    int t;
    std::cin>>t;
    while(t--){
        int n,i;
        std::cin>>n;
        std::vector<int>vec(n);
        for(i=0;i<n;i++){
            std::cin>>vec[i];
        }
        std::sort(vec.begin(),vec.end());
        std::cout<<vec[0]+vec[1]<<std::endl;
    }
}
