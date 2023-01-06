#include "stuinfo.hpp"
#include<iostream>
#include<cstring>
using namespace std;

void inputstu(stuinfo stu[], int n){
    cout<<"Please input information of "<< n <<" students:"<<endl;
    for(int i = 0; i < n; i++){
        cout<<"Student "<<i<<"'s name:";
        cin.getline(stu[i].name, 20);
        cout<<"Student "<<i<<"'s scores:";
        cin>>stu[i].score[0];
        cin>>stu[i].score[1];
        cin>>stu[i].score[2];
        stu[i].ave = double(stu[i].score[0] + stu[i].score[1] + stu[i].score[2])/3;
        cin.get();
    }
}

void showstu(stuinfo stu[], int n){
    cout<<"The information of "<<n<<" students you input are:"<<endl;
    for(int i = 0; i < n; i++){
        cout<<"Student "<< i <<" name: "<<stu[i].name<<", scores: ";
        cout<<stu[i].score[0]<<" ";
        cout<<stu[i].score[1]<<" ";
        cout<<stu[i].score[2]<<endl;
    }
}

void sortstu(stuinfo stu[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(stu[i].ave < stu[j].ave){
                stuinfo temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
    cout<<"The descending order of the students:"<<endl;
    for(int i = 0; i < n; i++){
        cout<<"Student "<< i <<" name: "<<stu[i].name<<", scores: ";
        cout<<stu[i].score[0]<<" ";
        cout<<stu[i].score[1]<<" ";
        cout<<stu[i].score[2]<<" ";
        cout<<"average: "<<stu[i].ave<<endl;
    }
}

bool findstu(stuinfo stu[], int n, char ch[]){
    bool mark = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < strlen(ch); j++){
            if(stu[i].name[j] != ch[j]){
                break;
            }else if(j == strlen(ch) - 1 && stu[i].name[j]){
                return true;
            }
        }

    }
    return mark;
}
