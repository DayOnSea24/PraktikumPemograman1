#include<stdio.h>
int main(){
    float a,b,c;
    printf("Masukkan nilai Pertama : ");
    scanf("%f",&a);
    printf("Masukkan nilai Kedua : ");
    scanf("%f",&b);
    c = a+b;
    printf("Hasil dari penjumplahan nilai pertama \"%.f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",a,b,c);
    return 0;
}