// The distance between two cities ( in Kilometers ) is input through the keyboard. Write a program to convert and point this distance in meters, feet, inches and centimeters.

#include <stdio.h>

int main(){
float km, m, cm ,ft, inch;
printf("Enter Distance In Kilometers = ");
scanf("%f", &km);

m = km * 1000;
cm = m * 100;
inch = cm/2.54;
ft = inch/12;

printf("In Meters = %f \n", m);
printf("In Centimeters = %f\n", cm);
printf("In Feet = %f\n", ft);
printf("In Inches = %f\n", inch);

    return 0;
}