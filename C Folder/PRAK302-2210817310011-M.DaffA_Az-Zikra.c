#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    (x>=80) ? printf("A")
    : (x<80 && x>=70) ? printf("B")
    : (x<70 && x>=60) ? printf("C")
    : (x<60 && x>=50) ? printf("D")
    : printf("E");
    return 0;
}