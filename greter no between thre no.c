#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%dd",&a,&b,&c);
    if(a>b&&a>c){
        printf("a");
}
    else if(b>a&&b>c){
        printf("b");
    }
    else{
        printf("c");
    }
    return 0;
}