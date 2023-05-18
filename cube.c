#include<stdio.h>
double+ cube (double a);
int main(){
 int a;
 double k;
 scanf("%d",&a);
 k=cube(a);
 printf("cube of %d is%.2f",a,k);
}
 double cube(double a){
    int k;
    k=a*a*a;
    return k;
} 