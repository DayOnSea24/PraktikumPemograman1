#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    (x>0) ? printf("positif")
    : (x<0) ? printf("negatif")
    : printf("nol");
    return 0;
}