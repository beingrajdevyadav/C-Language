// Write A Program To Calculate Volume Of Sphere

#include <stdio.h>
int main(){

float pi = 3.1415;
float r;

printf("Enter Sphere Radius Value = ");
scanf("%f", &r);

float V = (4*pi*r*r*r)/3;
printf("Sphere Volume = %f", V);

return 0;
}