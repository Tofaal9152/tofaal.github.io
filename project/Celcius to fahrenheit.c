#include <stdio.h>
float temp(float c);
int main()
{
    float c;
    printf("Enter the value of celciuse :\n");
    scanf("%f",&c);
    printf("Convertage value is %f",temp(c));

    return 0;
}
float temp(float c)
{
    float f;
    f =((c/5)*9)+32;
    return f;
}