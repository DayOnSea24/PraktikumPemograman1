#include<stdio.h>
int main(){
    int ss;
    scanf("%d",&ss);
    (ss<60 && ss>=0) ? printf("00:00:%02d",ss)
    : (ss>=60 && ss<3600) ? printf("00:%02d:%02d",ss/60,ss%60)
    : (ss>=3600 && ss<86400) ? printf("%02d:%02d:%02d",ss/3600,(ss%3600)/60,(ss%3600)%60)
    : (ss>=86400) ? printf("%d hari %02d:%02d:%02d",ss/86400,(ss%86400)/3600,((ss%86400)%3600)/60,((ss%86400)%3600)%60)
    : printf("Error");
    return 0;
}