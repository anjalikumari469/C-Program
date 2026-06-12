#include<stdio.h>
int main(){
    int i,s=0;
    i=1;
    while (i<=100)
    {
        s=s+i;
        i=i+1;
    }
    printf("sum of 1 to 100 natural number is=%d",s);
    return 0;
    
}