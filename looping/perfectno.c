#include<stdio.h>
int main(){
    int i,n,s=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for ( i = 1; i <= (n/2); i++)
    {
       if((n%i)==0){
        s=s+i;
       }
    }
    if(s==n && n!=0){
        printf("Number is perfect no");
    }
    else{
        printf("Number is not perfect no");
    }
}