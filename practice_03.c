// Volume Of Cylinder

#include <stdio.h>

int main(){
float pi = 3.1415;
float r, h;

printf("Enter Cylinder Radius Value = ");
scanf("%f", &r);
printf("Enter Cylinder Height Value = ");
scanf("%f", &h);

float V = pi * r * r * h;
printf("Cylinder Volume = %f", V);

return 0;
}