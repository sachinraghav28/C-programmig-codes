#include<stdio.h>
int main(){
double num(double r);
int r;
double a;
scanf("%d",&r);
a= num(r);
printf("daimeter of %d is %.2f",r,a);
return 0;
}
double num(double r){
    double a;
    a=2*r;
    return a ;
    
}