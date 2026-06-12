#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter the value of a&b=\n");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d=a,%d=b",a,b);
    return 0;
}