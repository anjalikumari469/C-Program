#include <stdio.h>
int main()
{
   int r, n, s = 0;
   printf("Enter any number:");
   scanf("%d", &n);
   int temp = n;
   while (n > 0)
   {
      r = n % 10;
      s = s + (r * r * r);
      n = n / 10;
   }
   if (s == temp)
   {
      printf("Number is Armstrong");
   }
   else
   {
      printf("Number is not Armstrong");
   }
}