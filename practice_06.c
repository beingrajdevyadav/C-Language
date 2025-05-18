// Cone Surface Area

#include <stdio.h>

int main(){

    float pi = 3.1415;
    float r, l, A;

    printf("Enter Cone Radius = ");
    scanf("%f", &r);

    printf("Enter Cone Length = ");
    scanf("%f", &l);

    A = pi * r * (r + l);

printf("Cone Surface Area = %f", A);

    return 0;
}