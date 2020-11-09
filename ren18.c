//
// Created by tomokazu on 2020/11/09.
//

#include <stdio.h>
int main(void ){
    long long a;
    printf("a=");   scanf("%d",&a);
    if (a<0){
        a=-a;
    }
    printf("%d \n",a);
    return a;
}