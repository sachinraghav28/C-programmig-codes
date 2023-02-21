 #include<stdio.h>
 int main(){
    int n,year,week,months;
    scanf("%d",&n);
    year=n/365;
    week=n/7;
    months=n/30;
    printf("year=%d week=%d months=%d",year,week,months);
    return 0;
 }