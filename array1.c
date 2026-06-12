#include<stdio.h>
int main(){
    int a[10],i;
    printf("enter the element of array=\n");
    for ( i = 0; i < 9; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements are=\n");
    for ( i = 0; i < 9; i++)
    {
    printf("%d",a[i]);
    }
    return 0;
    
}