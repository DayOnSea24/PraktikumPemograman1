#include<stdio.h>
#include<stdlib.h>
int main(){
    char a[30],b[30],c[30],d[30],e[30],f[30],g[30];
    //Inputs
    printf("Nama                : ");
    gets(a);

    printf("NIM                 : ");
    gets(b);

    printf("Kelas Paralel       : ");
    gets(c);

    printf("Tempat/Tanggal Lahir: ");
    gets(d);

    printf("Alamat              : ");
    gets(e);

    printf("Hobby               : ");
    gets(f);

    printf("No. HP              : ");
    gets(g);

    //Outputs
    printf("\nNama                : %s\n",a);
    printf("NIM                 : %s\n",b);
    printf("Kelas Paralel       : %s\n",c);
    printf("Tempat/Tanggal Lahir: %s\n",d);
    printf("Alamat              : %s\n",e);
    printf("Hobby               : %s\n",f);
    printf("No. HP              : %s",g);
    return 0;
}