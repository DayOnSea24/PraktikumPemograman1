#include<stdio.h>
int main(){
    int a,b,c,small,mid,big;
    scanf("%d %d %d", &a,&b,&c);
    //a,b,c
    if(a<b){
        if(b<c){
        small= a;mid= b;big= c;
        }else{
            if(a<c){
                small= a;mid= c;big= b;
            }else{
                small= c;mid= a;big= b;
            }
        }
    }else{
        if(b<c){
            if(a<c){
                small= b;mid= a;big= c;
            }else{
                small= b;mid= c;big= a;
            }
        }else{
            if(c<a){
                if(a<b){
                    small= c;mid= a;big= b;
                }else{
                    small= c;mid= b;big= a;
                }
            }
        }
    }
    printf("%d %d %d", small,mid,big);
    return 0;
}