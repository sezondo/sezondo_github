#include <stdio.h>


int main() {
    int  a, b, c, d, avg, sum; //1번 문제

    scanf("%d%d%d%d", &a, &b, &c, &d);

    sum = a + b + c + d;
    avg = sum / 4;

    printf("sum = %d\n",sum);
    printf("avg = %d", avg);

    printf("\n");
    printf("\n");

    int q, w, quo, rem; //2번 문제

    scanf("%d%d", &q, &w);

    quo = q / w;
    rem = q % w;

    printf("%d / %d = %d ... %d", q,  w, quo, rem);

    printf("\n");
    printf("\n");

    int e, r, width, length, area; // 3번 문제

    scanf("%d%d", &e, &r);

    width = e + 5;
    length = r * 2;
    area = width * length;

    printf("width = %d\n", width);
    printf("length = %d\n", length);
    printf("area = %d", area);

    printf("\n");
    printf("\n");

    int i, j; // 4번 문제

    scanf("%d%d", &i, &j);

    printf("%d %d\n",++i, j--);
    printf("%d %d", i, j);

    printf("\n");
    printf("\n");

    int height_MS, weight_MS, height_GY, weight_GY, val; // 5번 문제

    scanf("%d%d\n", &height_MS, &weight_MS); // 민수 키 몸무게
    scanf("%d%d", &height_GY, &weight_GY); // 기영 키 몸무게

    val =  (height_MS > height_GY) && (weight_MS > weight_GY);

    printf("%d", val);
}
