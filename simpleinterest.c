#include <stdio.h>
int main()
{
    float SI, p, r, t;
    printf("enter the value of p,r&t=\n");
    scanf("%f%f%f", &p, &r, &t);
    SI = (p * r * t) / 100;
    printf("%f", SI);
    return 0;
}