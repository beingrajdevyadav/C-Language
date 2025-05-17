#include <stdio.h>

int main(){
// printf("Hello World");
int a, b;

printf("Enter a : ");
scanf("%d", &a);

printf("Enter b : ");
scanf("%d", &b);

int r = a % b;

printf("Your reminder is %d ", r);

    return 0;
}