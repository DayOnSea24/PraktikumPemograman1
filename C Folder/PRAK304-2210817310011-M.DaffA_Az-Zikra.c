#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    (x==0) ? printf("nol")
    : (x>0 && x<10) ? printf("satuan")
    : (x>=10 && x<20) ? printf("belasan")
    : (x>=20 && x<100) ? printf("puluhan")
    : printf("Anda Menginput Melebihi Limit Bilangan");
    return 0;
}