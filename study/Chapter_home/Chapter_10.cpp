/*

#include <stdio.h>
 //형성평가 1번
int main() {
    int num, i;
    int count[7] = { 0 };
    while (1) {
        scanf("%d", &num);
        if (num < 1 || num > 6) break;
        count[num]++;
    }
    for (i = 1; i <= 6; i++) {
        printf("%d : %d\n", i, count[i]);
    }
    return 0;
 }
 #include <stdio.h>
 //형성평가 2번
int main() {
    
    int num, i;
    int count[11] = { 0 };
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        count[num / 10]++;
    }
    for (i = 10; i >= 0; i--) {
        if (count[i] > 0) {
            printf("%d : %d person\n", 10 * i, count[i]);
        }
    }
    return 0;
 }
 #include <stdio.h>
 //형성평가 3번
int main() {
    
    int i;
    int fibo[11] = { 0 };
    scanf("%d %d", &fibo[1], &fibo[2]);
    for (i = 3; i < 11; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (i = 1; i < 11; i ++) {
        int num = fibo[i] % 10; 
        printf("%d\n", num); 
    }
    return 0;
 }
 #include <stdio.h>
 //형성평가 4번
int main() {
    
    int i, j;
    int sum = 0;
    int arr[4][3] = { {3, 5, 9}, {2, 11, 5}, {8, 30, 10},{22, 5, 1} };
   
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }
    printf("%d", sum);
   
    return 0;
 }
 #include <stdio.h>
 //형성평가 5번
int main() {
    
    int i, j;
    int arr[4][4] = { 0 };
    for ( i = 0; i < 4; i++)
    {
        printf("%dclass? ", i+1);
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
            arr[i][3] += arr[i][j];
        }
        printf("\n");
    }
    for ( i = 0; i < 4; i++)
    {
        printf("%dclass : %d\n", i + 1, arr[i][3]);
    }
    return 0;
 }
 #include <stdio.h>
 //형성평가 6번
int main() {
    
    int i, j;
    int arr[5][7] = { 0,1,0,1,0,1,0 };
    for (i = 1; i < 5; i++) {
        for (j = 1; j < 6; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j+1];
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 1; j < 6; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
 }
#include <stdio.h>
 //형성평가 7번
int main() {
    
    int i, j;
    int firstArr[2][3] = { 0 };
    int secondArr[2][3] = { 0 };
    int sumArr[2][3] = { 0 };
    printf("first array\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d" , &firstArr[i][j]);
        }
        printf("\n");
    }
    
    printf("second array\n");
    for (i  = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d", &secondArr[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++) {
            sumArr[i][j] = firstArr[i][j] * secondArr[i][j];
            printf("%d ", sumArr[i][j]);
        }
        printf("\n");
    }
    return 0;
 }
 #include <stdio.h>
//형성평가 8번
int main() {
    int i, j;
    int arr[4][2] = { 0 };
    int transverseSum[4] = { 0 };
    int lengthSum[2] = { 0 };
    int totalSum = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
            transverseSum[i] += arr[i][j];
            lengthSum[j] += arr[i][j];
            totalSum += arr[i][j];
        }
        printf("\n");
    }
    for (i = 0; i < 4; i++)
    {
        printf("%d ", transverseSum[i] / 2);
    }
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        printf("%d ", lengthSum[i] / 4);
    }
    printf("\n");
    printf("%d", totalSum / 8);
    return 0;
 }
 #include <stdio.h>
 //형성평가 9번
int main() {
    int i, j;
    int pas[11][11] = { 0 };
    int num;
    scanf("%d", &num);
    pas[1][1] = 1;
    for (i = 2; i <= num; i++) {
        for (j = 1; j <= i; j++) {
            pas[i][j] = pas[i - 1][j - 1] + pas[i - 1][j];
        }
    }
    for (i = num; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", pas[i][j]);
        }
        printf("\n");
    }
    return 0;
 }
 #include <stdio.h>
 //형성평가 10번
int main() {
    int i, j;
    char arr[3][5] = { { 'A', 'B',  'C', 'D', 'E' }, {'F', 'G',  'H', 'I', 'J'}, {'K', 'L',  'M', 'N', 
'O'} };
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%c ", arr[i][j] + 32);
        }
        printf("\n");
    }
    
    return 0;
 }

*/