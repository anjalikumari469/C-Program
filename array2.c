#include<stdio.h>
int main(){
    int a[10],mul=1,i;
    printf("enter the element of array=\n");
    for ( i = 0; i < 9; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 9; i++)
    {
        mul=mul*a[i];
    }
    printf("%d",mul);
    return 0;
    
    
}