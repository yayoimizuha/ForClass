//
// Created by tomokazu on 2020/11/09.
//

#include <stdio.h>
int main(void){
    int a,b;
    printf("異なる2つの整数を入力\n");
    printf("整数Aを入力：");  scanf("%d",&a);
    printf("整数Bを入力：");  scanf("%d",&b);
    if (a>b){
        printf("aのほうが");
    } else{
        printf("bのほうが");
    }
    printf("大きい\n");
    return 0;
}