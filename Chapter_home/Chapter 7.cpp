#include <stdio.h>
#include <string.h>

int main() {

    int number; //형성평가 1번

    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        printf("JUNGOL\n");
    }

    printf("\n\n");
    printf("\n\n");

    int inputNumber_1, inputNumber_2; //형성평가 2번
    int compare = 0, compareSmall;
    int compareDiff;

    scanf("%d %d", &inputNumber_1, &inputNumber_2);

    if (inputNumber_1 > inputNumber_2)
    {
        compare = inputNumber_1;
        compareSmall = inputNumber_2;

    }
    else {
        compare = inputNumber_2;
        compareSmall = inputNumber_1;
    }
    compareDiff = compare - compareSmall;


    for (int i = 0; i <= compareDiff; i++)
    {
        printf(" % d", compareSmall);
        compareSmall++;
    }

    printf("\n\n");
    printf("\n\n");

    int drainage;//형성평가 3번
    int drainageCopy = 0;

    scanf("%d", &drainage);

    for (int i = 1; i <= drainage; i++)
    {
        if (i % 5 == 0)
        {
            drainageCopy += i;
        }
    }

    printf("%d", drainageCopy);

    printf("\n\n");
    printf("\n\n");


    int number_4; //형성평가 4번
    int cost_4;
    int count_4, sub_4 = 0;
    double avg_4 = 0.0;

    scanf("%d", &cost_4);

    for (int i = 1; i <= cost_4; i++)
    {
        scanf("%d", &count_4);
        sub_4 += count_4;
    }
    avg_4 = (double)sub_4 / cost_4;
    printf("%.2f", avg_4);


    printf("\n\n");
    printf("\n\n");


    int number_5;//형성평가 5번
    int even = 0, odd = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &number_5);

        if (number_5 % 2 == 0)
        {
            even++;
        }
        else if (number_5 % 2 == 1)
        {
            odd++;
        }
    }
    printf("even : %d\n", even);
    printf("odd : %d\n", odd);

    printf("\n\n");
    printf("\n\n");

    int inputNumber_6_1, inputNumber_6_2; //형성평가 6번
    int compare_big, compare_small;
    int sum_6 = 0;
    int count_6 = 0;
    double avg_6 = 0.0;

    scanf("%d %d", &inputNumber_6_1, &inputNumber_6_2);

    if (inputNumber_6_1 > inputNumber_6_2)
    {
        compare_big = inputNumber_6_1;
        compare_small = inputNumber_6_2;
    }
    else {
        compare_small = inputNumber_6_1;
        compare_big = inputNumber_6_2;
    }

    for (int i = compare_small; i <= compare_big; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            sum_6 += i;
            count_6++;
        }
        else if ((i % 3 == 0))
        {
            sum_6 += i;
            count_6++;
        }
        else if ((i % 5 == 0))
        {
            sum_6 += i;
            count_6++;
        }
    }

    avg_6 = (double)sum_6 / count_6;

    printf("sum : %d\n", sum_6);
    printf("avg : %.1f", avg_6);

    printf("\n\n");
    printf("\n\n");

    int inputNumber_7_1, inputNumber_7_2; //형성평가 7번

    scanf("%d", &inputNumber_7_1);
    inputNumber_7_2 = inputNumber_7_1;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", inputNumber_7_1);
        inputNumber_7_1 += inputNumber_7_2;
    }

    printf("\n\n");
    printf("\n\n");

    int row_8 = 0, column_8 = 0; //형성평가 8번
    int inputData_8_i = 0, inputData_8_j = 0;

    scanf("%d %d", &row_8, &column_8);

    for (int i = 1; i <= row_8; i++) {
        inputData_8_i++;
        inputData_8_j = inputData_8_i;
        for (int j = 1; j <= column_8; j++) {
            printf("%d ", inputData_8_j);
            inputData_8_j += inputData_8_i;
        }
        printf("\n");
    }
    printf("\n\n");
    printf("\n\n");

    int inputData_9;//형성평가 9번

    scanf("%d", &inputData_9);

    for (int i = 1; i <= inputData_9; i++)
    {
        for (int j = 1; j <= inputData_9; j++) {
            printf("(%d, %d)", i, j);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("\n\n");

    int inputData_10_1, inputData_10_2; //형성평가 10번
    int temp_10 = 0;
    scanf("%d %d", &inputData_10_1, &inputData_10_2);
    temp_10 = inputData_10_1;

    for (int i = 1; i <= 9; i++)
    {
        inputData_10_1 = temp_10;

        for (int j = 0; j < inputData_10_2; j++)
        {
            printf("%3d * %d = %2d", inputData_10_1, i, inputData_10_1 * i);
            inputData_10_1--;
        }
        printf("\n");
    }

    return 0;
}

