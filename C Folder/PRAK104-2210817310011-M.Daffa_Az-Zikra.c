#include<stdio.h>
int main(){
    int a,b,ad,add,bd,bdd;
    a=400000;
    b=350000;
    ad=a*13/100;
    add=a-ad;
    bd=b*21/100;
    bdd=b-bd;
    printf("Harga sepatu A adalah %d\n",a);
    printf("Harga sepatu B adalah %d\n",b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n",add);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n",bdd);
}