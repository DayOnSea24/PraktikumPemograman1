#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,k,l;
    scanf("%lf %lf",&a,&b);
    c = sqrt((b*b)-(a*a));
    k = a+b+c;
    l = (a*c)/2;
    printf("Alas = %.lf cm\nTinggi = %.lf cm\n",c,a);
    printf("Keliling = %.lf cm\nLuas = %.lf cm^2",k,l);
    return 0;
}