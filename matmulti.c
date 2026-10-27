#include<stdio.h>
int main(){
    int a[2][4], b[4][3], prod[2][3];
    int i,j,k;

    printf("Enter the elements of first matrix:\n");
    for(i=0;i<2;i++)
    for(j=0;j<4;j++)
    scanf("%d",&a[i][j]);

    printf("Enter the elements of second matrix:\n");
    for(i=0;i<4;i++)
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);

    for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        prod[i][j] = 0;

        for(k=0;k<4;k++)
        prod[i][j] += a[i][k]*b[k][j];

    }
    }
    printf("Product of 2 matrices:\n");
    for(i=0;i<2;i++){
    for(j=0;j<3;j++)
    printf("%d\t",prod[i][j]);
    printf("\n");
}
    
return 0;
}
