#include<stdio.h>
int main(){
    int p,c,m,h,e,average,percentage;
    scanf("%d%d%d%d%d",&p,&c,&m,&h,&e);
    average=(p+c+m+h+e)/5;
    percentage=average/100;
    printf("average=%d percentage=%d",average,percentage);
    return 0;
}