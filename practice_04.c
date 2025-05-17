// Surface Area Of  Cylinder

#include <stdio.h>

int main(){

    float pi = 3.1415;

    float r, h;

    printf("Enter Cylinder Radius Value = ");
    scanf("%f", &r);
    printf("Enter Cylinder Height Value = ");
    scanf("%f", &h);

    float A = 2 * pi * r * (h + r);

    printf("Surface Area Of Cylinder = %f", A);


    return 0;
}