#include<stdio.h>

int ggdan();

int main(){

    int num[1];
    
    scanf("%d%d",&num[0], &num[1]);
    ggdan(&num[0], num[1]);

    return 0;
}

int ggdan(int x, int y) {

    for (int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", x, i, x * i);
    }
}