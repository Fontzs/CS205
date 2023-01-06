#include<iostream>
#include "stuinfo.hpp"
using namespace std;
#define x 5
int main(){
    stuinfo stu[x];
    inputstu(stu, x);
    showstu(stu, x);
    sortstu(stu, x);
    cout<<"Please input the name you want to find:";
    char ch[20];
    cin.getline(ch, 20);
    if(!findstu(stu, x, ch)){
        cout<<ch<<" is not in the students list.\n";
    }else{
        cout<<ch<<" is in the students list.\n";
    }



    return 0;
}