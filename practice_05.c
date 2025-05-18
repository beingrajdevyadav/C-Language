// Volume Of Cone

#include <stdio.h>

int main(){

    float pi = 3.1415;
    float r, h;

    printf("Enter Cone Radius : ");
    scanf("%f", &r);

    printf("Enter Cone Height : ");
    scanf("%f", &h);

    float V = (pi * r * r * h);

    printf("Cone Volume = %f", V);


    return 0;

}