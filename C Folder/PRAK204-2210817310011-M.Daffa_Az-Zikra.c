#include<stdio.h>
int main(){
    float r,t,pie,v,lp,k;
    pie = 3.14;
    scanf("%f %f",&r,&t);
    v = pie*r*r*t;
    lp = 2*pie*r*(r+t);
    k = pie*(r+r);
    printf("Volume = %.2f \nLuas = %.2f \nKeliling = %.2f",v,lp,k);
}