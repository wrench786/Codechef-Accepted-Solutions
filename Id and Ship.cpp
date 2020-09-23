#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    std::cin.ignore();
    while(t--){
        char ch;
        std::cin>>ch;
        std::cin.ignore();
        if(ch-65==1 || ch-97==1){
            std::cout<<"BattleShip"<<std::endl;
        }
        else if(ch-65==2 || ch-97==2){
            std::cout<<"Cruiser"<<std::endl;
        }
        else if(ch-65==3 || ch-97==3){
            std::cout<<"Destroyer"<<std::endl;
        }
        else{
            std::cout<<"Frigate"<<std::endl;
        }
    }
}
