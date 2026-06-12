#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b&c=\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is largest no:");
     } else if(b>c){
        printf("b is largest no:");
         } 
        else{
        printf("c is largest no:");
        }
        return 0;
    }

