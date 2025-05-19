// Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.

#include <stdio.h>

int main(){
float bp, da, hra, grpay;

printf("Enter Basic Salary = ");
scanf("%f", &bp);

da = 0.4 * bp;
hra = 0.2 * bp;

grpay = bp + da + hra;

printf("Basic Salary = %f \n", bp);
printf("Dearness Allowance = %f \n", da);
printf("House Rent Allowance = %f \n", hra);
printf("Gross Salary = %f", grpay);
    return 0;
}