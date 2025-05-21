// If lengths of three sides of a triangle are input through the keyboard, Write a program to find the area of the triangle.


#include <stdio.h>
#include <math.h>

int main(){
float a, b, c, sp, area;

printf("Enter the sides of triangle : ");
scanf("%f %f %f", &a, &b, &c );

sp = (a + b + c)/2;
area = sqrt(sp*(sp - a)*(sp - b)* (sp-c));


printf("Area Of Triangle = %f", area);
    return 0;
}