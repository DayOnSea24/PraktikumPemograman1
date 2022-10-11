#include<stdio.h>
int main(){
    double a,b,x,y,rumus;
    a = 9;
    b = 6;
    x = 10;
    y = 7;
    rumus = (a+b)*x/y;
    printf("Variabel a bernilai %.f\n",a);
    printf("Variabel b bernilai %.f\n",b);
    printf("Variabel x bernilai %.f\n",x);
    printf("Variabel y bernilai %.f\n",y);
    printf("Hasil dari a ditambah b dikali x dibagi y adalah %.2f",rumus);
}