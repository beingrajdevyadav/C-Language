// a year is entered through the keyword, write a program to determine whether the year is leap or not.
// Use logical operators && and || .

#include <stdio.h>
int main(){

int year ;

printf("Enter year : ");
scanf("%d", &year);

if(year % 400 == 0 || year % 100 != 0 && year % 4 == 0){
    printf("%d is a leap year. ", year);
}else{
    printf("%d is not a leap year.", year);
}
    return 0;
}