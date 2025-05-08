#include<stdio.h>
#include<iostream>

void temp(int n){
    if(n <= 0)return;
    temp(n/2);
    std::cout << n << " "; 
    
}


int main(){

    int a;
    std::cin >> a;
    temp(a);

    return 0;
}

