#include"fib.hpp"
#include<iostream>
using namespace std;
int main(){
    int n;
    while(1){
        cout<<"Please input a positive interger:";
        cin>>n;
        if(n <= 0){
            continue;
        }else{
            for(int i = 1; i <= n; i++){
                if(i % 10 == 0){
                    cout<<fib(i)<<endl;
                }else if(i == n){
                    cout<<fib(i)<<endl;
                }else{
                    cout<<fib(i)<<"   ";
                }
            }
            break;
        }
    }

    return 0;
}