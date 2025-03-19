#include <stdio.h>
#include <string.h>

int main() {
    char par[30];//입력칸
    memset(par, 0, sizeof(par)); //배열 클리어
    int number = 0; // 끝번호 확인 save
    int temp = 0;//끝번호 계산 temp

    printf("문자입력 :\n");


    scanf("%s", par);

    for (number = 0; number < 30; ++number) {

        if (par[number] != 0)
        {
            printf("검사중...\n");
        }
        else {
            --number;
            temp = number;
            printf("검사완료\n");
            break;
        }
        
    }

    bool ng = false;
    int save;

    if (number % 2 == 0)//홀수일때
    {
        printf("홀수확인\n");
        for (save = 0; save <= number; save++)
        {
            if (par[save] == par[temp])
            {
                printf("%d 번째 확인 완료\n", save);
            }
            else
            {
                printf("%d 번째 확인 완료\n", save);
                ng = true;
            }
            temp--;
        }
    }
    else if (number % 2 == 1)//짝수일때
    {
        printf("짝수확인\n");
        for (save = 0; save <= number; save++)
        {
            if (par[save] == par[temp])
            {
                printf("%d 번째 확인 완료\n", save);
            }
            else
            {
                printf("%d 번째 확인 완료\n", save);
                ng = true;
            }
            temp--;
        }
    }


    if (ng == false)
    {
        printf("%s는 팰린드롬 문자입니다\n", par);
    }
    else
    {
        printf("%s는 팰린드롬 문자가 아님니다\n", par);
    }

    return 0;
}

