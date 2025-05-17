// Write A Program To Calculate Surface Area Of Sphere

#include <stdio.h>
int main(){
    
float pi = 3.1415;
float r;

printf("Enter Radius Value = ");
scanf("%f", &r);

float A = 4 * pi * r * r;
printf("Sphere Surface Area = %f", A);
return 0;

}