#include<iostream>
using namespace std;
enum Day{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
enum Weather{Sunny, Rainy};
struct Dayinfo{
    enum Day day;
    enum Weather weather;

};

bool canTravel(Dayinfo x){
    if((x.day == Saturday || x.day == Sunday) && x.weather == Sunny){
        return true;
    }else{
        return false;
    }
}


int main(){
    Dayinfo y = {Sunday, Sunny};
    cout<<canTravel(y)<<endl;
    return 0;
}