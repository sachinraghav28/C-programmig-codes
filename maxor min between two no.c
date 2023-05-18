#include<stdio.h>
int main(){
int max(int a,int b);
int a,b,k;
scanf("%d%d",&a,&b);
k=max(a,b);
printf("no %d is max  ",k);
return 0;
}
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
    
}