#include <stdio.h>
int main()
{
    float rad,area;
    printf("Enter the Radius of the Circle :: ");
    scanf("%f",&rad);
    area=3.14*rad*rad;
    printf("Area of Circle  = %.4f square units ",area);
    return 0;
}
