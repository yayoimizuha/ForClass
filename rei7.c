//
// Created by tomokazu on 2020/11/09.
//

#include <stdio.h>
int main(void){
    int a,b;
    printf("異なる2つの整数を入力\n");
    printf("整数Aを入力：");  scanf("%d\n",&a);
    printf("整数Bを入力：");  scanf("%d\n",&b);
    if (a>b){
        printf("aのほうが大きい\n");
    } else if (a<b){
        printf("bのほうが大きい\n");
    }
    else if(a==b){
        printf("同じ数値\n");
    }

    return 0;
}