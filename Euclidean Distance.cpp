#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
}Coordinates; // 2차원 좌표값 자료형

double calculateDistance(Coordinates turret, Coordinates enemy) { //유클리드 공식함수
    int dx = enemy.x - turret.x;
    int dy = enemy.y - turret.y;

    return sqrt(dx * dx + dy * dy);
    
}




int main() {
    Coordinates enemy; //적의 위치 변수

    Coordinates jgh = { 19,-120 }; // 조규현씨의 터렛 좌표값
    Coordinates byh = { 17,-120 }; // 백승환씨의 터렛 좌표값



    printf("적 x좌표 입력  : ");
    scanf("%d", &enemy.x);
    printf("적 y좌표 입력  : ");
    scanf("%d", &enemy.y);

    double distJGH, distBYH;  //적과의 거리
    distJGH = calculateDistance(jgh, enemy); //함수 호출 및 값넣기
    distBYH = calculateDistance(byh, enemy); //함수 투입

    printf("\n조규현 터렛과 적 사이 거리: %.2f\n", distJGH);
    printf("백승환 터렛과 적 사이 거리: %.2f\n", distBYH);

    return 0;
}
