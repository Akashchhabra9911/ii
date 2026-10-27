#include <stdio.h>
int main(){
    int a[10] , n ,i,x;
    int result = 0 , power = 1;
    printf("Enter the degree of polynomial: ");
    scanf("%d",&n);
    printf("Enter coefficients from constant term onwards:"); 
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);

    printf("Enter the value of x:");
    scanf("%d",&x);

    for(i=0;i<=n;i++){
        result=result + a[i]*power;
        power=power*x;
    }
    printf("Polynomial value = %d",result);
    return 0;




}
