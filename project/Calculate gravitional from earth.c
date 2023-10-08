#include <stdio.h>
float mass(float m);
int main()
{
    float m;
    printf("Enter a mass \n");
    scanf("%f",&m);
    printf("Earth attracts you at this rate %f",mass(m));
    return 0;
}
float mass(float m)
{
    float masscalculate,g=9.8;;

    masscalculate=m*g;
    return masscalculate;
}