// Consider a currency system in which there are notes of nine denominations, namely, Rs. 1, 2, 5, 10, 20, 50, 100, 200, 500.
// If a sum of Rs. N is entered through the keyboard,
// Write a program to compute the smallest number of notes that will combine to give Rs. N.


#include <stdio.h>
int main(){
    int amount,total, final,  no5hun, no2hun, no1hun, no50, no20, no10, no5, no2, no1;

    printf("Enter the amount = ");
    scanf("%d", &amount);

    printf("Amount is = %d \n", amount);
    printf("Calculating... \n");

    // to store final total
final = amount;

    no5hun = amount / 500;
    amount = amount % 500;


    no2hun = amount / 200;
    amount = amount % 200;


    no1hun = amount / 100;
    amount = amount % 100;


    no50 = amount / 50;
    amount = amount % 50;


    no20 = amount / 20;
    amount = amount % 20;


    no10 = amount / 10;
    amount = amount % 10;


    no5 = amount / 5;
    amount = amount % 5;


    no2 = amount / 2 ;
    amount = amount % 2;

    no1 = amount / 1;
    amount = amount % 1;


    total = no5hun + no2hun + no1hun + no50 + no20  + no10 + no5 + no2 + no1;

    printf("Total Notes = %d Notes \n Rs. 500 : %d \n Rs. 200 : %d \n Rs. 100 : %d \n Rs. 50 : %d \n Rs. 20 : %d \n Rs. 10 : %d \n Rs. 5 : %d \n Rs. 2 : %d \n Rs. 1 : %d \n Total = %d Rs.", total, no5hun, no2hun, no1hun, no50, no20, no10, no5, no2, no1, final);
    return 0;
}