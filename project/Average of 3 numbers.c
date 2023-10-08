#include <stdio.h>
float avg(float a, float b,float c);
int main()
{
    float a,b,c;
    printf("Enter the value of a \n");
    scanf("%f",&a);
    printf("Enter the value of b \n");
    scanf("%f",&b);
    printf("Enter the value of c \n");
    scanf("%f",&c);
    printf("The avg of 3 number is %f",avg(a,b,c));    
    return 0;
}
float avg(float a, float b,float c){
    float result;
    result=(a+b+c)/3;
    return result;
}