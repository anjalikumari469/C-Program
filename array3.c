#include<stdio.h>
int main(){
    int i,a[5],s;
    printf("enter the element of array=\n");
    for ( i = 0; i < 4; i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[0];
    for ( i = 0; i < 4; i++)
    {
        if(s>a[i]){
            s=a[i];
        }
    }
    printf("smallest no is=%d",s);
    return 0;
    
}