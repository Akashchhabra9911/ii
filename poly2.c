#include <stdio.h>
int main(){
    int a[10] , b[10], sum[10],diff[10];
    int n,i;

    printf("Enter the degree of polynomials:" );
    scanf("%d",&n);

    printf("Enter coefficients of first polynomial:\n");
    for(i=0;i<=n;i++){
        printf("coefficient of x^%d:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter coefficients of second polynomial:\n");
    for(i=0;i<=n;i++){
        printf("coefficient of x^%d:",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<=n;i++){
        sum[i] = a[i] + b[i];
        diff[i]= a[i] - b[i];
    }
    printf("\nSum of polynomials:");
    for(i=n;i>=0;i--){
        printf("%dx^%d", sum[i], i);
        if(i>0)
        printf("+");
    }
    printf("\nDifference of polynomials:");
    for(i=n;i>=0;i--){
        printf("%dx^%d", diff[i],i);
        if(i>0)
        printf("+");
    }
    return 0;
}