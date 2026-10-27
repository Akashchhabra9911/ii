#include <stdio.h>
int main(){
    int a[2][2], b[2][2];
    int i, j, k, sum[2][2], diff[2][2], prod[2][2];
    
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d", &a[i][j]);

    printf("Enter the elements of second matrix:\n");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d", &b[i][j]);

    for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        sum[i][j]= a[i][j] + b[i][j];
        diff[i][j]=a[i][j] - b[i][j];
        prod[i][j]=0;

        for(k=0;k<2;k++)
        prod[i][j] += a[i][k] * b[k][j];
    }
    }
    
    printf("Addition:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
        printf("%d\t",sum[i][j]);
        printf("\n");

    }
    printf("Subtraction:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
        printf("%d\t",diff[i][j]);
        printf("\n");
    }
    printf("Multiplication:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
        printf("%d\t",prod[i][j]);
        printf("\n");
    }
    return 0;
}

