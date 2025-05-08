#include<stdio.h>
#include<iostream>

//형성평가 6번
int MUL = 1;

void num(int n) {

    if (n <= 0)
    {
        return;
    }
    if (n % 10 != 0)
    {
        MUL *= ( n % 10);
    }
    
    n /= 10;
    num(n);
}

int main() {
    int num1,num2,num3;
    int mul;
    std::cin >> num1 >> num2 >> num3;

    mul = num1 * num2 * num3;
    num(mul);

    std::cout << MUL << std::endl;

    return 0;
}

