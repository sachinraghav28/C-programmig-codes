#include <stdio.h>

int main()
{
    int row,col,i,j;
    scanf("%d%d",&row,&col);
    int a[row][col],b[i][j],c[i][j];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
        printf("%d",a[i][j]);
        
    }
     for(i=0;i<row;i++){
        for(j=0;j<col;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
        printf("%d",b[i][j]);
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
        c[i][j]=a[i][j]+b[i][j];
        printf("%d",c[i][j]);
    }
    printf("\n");

    return 0;
}