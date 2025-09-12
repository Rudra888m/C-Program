#include<stdio.h>
int main()
{
    float a, b;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    if(a>b)
    {
        printf("%f is larger than %f", a, b);
    }
    else if(a<b)
    {
        printf("%f is larger than %f", b, a);
    }
    else
    {
        printf("Enter valid numbers.");
    }
    return 0;
}