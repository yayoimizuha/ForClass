//
// Created by tomokazu on 2020/10/26.
//
//
// Created by tomokazu on 2020/10/26.
//
#include <stdio.h>
#include <math.h>

int main(void) {
    float r,h;
    float s;
    printf("半径rを入力 : "); scanf("%f",&r);
    printf("高さhを入力 : "); scanf("%f",&h);
    s=r*r*h*M_PI;
    printf("半径 r = %f,高さ h = %fの円柱の体積は %f\n",r,h,s);

}

