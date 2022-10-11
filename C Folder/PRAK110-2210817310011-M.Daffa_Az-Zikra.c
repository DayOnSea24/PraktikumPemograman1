#include<stdio.h>
#include<math.h>
int main(){
    int a,t,m,k,l;
    a=5;
    t=12;
    m= sqrt(a*a+t*t);
    k=a+t+m;
    l=a*t/2;
    printf("Diketahui :\n");
    printf("Alas = %d cm\nTinggi = %d cm\n\n",a,t);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\nSisi B = %d cm\nSisi C = %d cm\n",t,m,a);
    printf("Keliling = %d cm\nLuas = %d cm",k,l);
}