#include<stdio.h>
int main(){
    int a,b,x,y,ab,xy,abxy;
    a=9;
    b=5;
    x=8;
    y=8;
    ab=a%b;
    xy=x%y;
    abxy=ab+xy;
    printf("Variabel a bernilai %d\n",a);
    printf("Variabel b bernilai %d\n",b);
    printf("Variabel x bernilai %d\n",x);
    printf("Variabel y bernilai %d\n",y);
    printf("Total sisa bagi a dibagi b dan x dibagi y adalah %d\n",abxy);
}