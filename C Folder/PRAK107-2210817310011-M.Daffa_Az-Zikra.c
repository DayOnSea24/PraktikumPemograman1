#include<stdio.h>
int main(){
    int s1,s2,s3,k,hppm,ba;
    s1=4;
    s2=5;
    s3=7;
    k=s1+s2+s3;
    hppm=85000;
    ba=hppm*k;
    printf("Diketahui :\nPanjang sisi segitiga berturut-turut adalah %d, %d, dan %d\nKeliling Tanah Pak Dengklek adalah %d\nHarga tanah Per Meter adalah %d\nJawaban :\nBiaya yang diperlukan Pak Dengklek adalah : Rp %d",s1,s2,s3,k,hppm,ba);
}