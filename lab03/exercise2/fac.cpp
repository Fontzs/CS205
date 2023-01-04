#include "fac.hpp"
#include<iostream>
void fac(int n){
    unsigned long long int res = 1;
    for(int i = 1; i <= n; i++){
        res *= i;
        std::cout<<i<<"! = "<< res<< std::endl;

    }
}