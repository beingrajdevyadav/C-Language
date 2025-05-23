// While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000, if quantity and price per item are input through the keyboard, write a program to calculate the total expenses.


#include <stdio.h>
int main(){
int qty, dis;
float rate, total;

printf("Enter quantity and rate : ");
scanf("%d %f", &qty, &rate);

if(qty > 1000){
    dis = 10;
}else{
    dis = 0;
};


total = (qty * rate) - (qty * rate * dis / 100);
printf("Total expenses = Rs. %f", total);
    return 0;
}