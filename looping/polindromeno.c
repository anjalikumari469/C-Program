#include<stdio.h>
int main (){
    int n,t,rev=0;
    printf("Enter any number:");
    scanf("%d",&n);
    int p=n;
    while(n!=0){
        t=n%10;
        rev=rev*10+t;
        n=n/10;
    }
    if(rev==p){
        printf("No is polindrome");
    
    }
    else{
        printf("No is not polindrome");
    }
}