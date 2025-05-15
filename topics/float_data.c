// float data type is used to store non - integer values

#include <stdio.h>

int main(){
float x = 5;
float y = 2;
float z = x / y;

// Note : float z = 5/2; ==> 2.0000000 NOT 2.5 😛
// Arithmatic Operations are done with same data type to avoid errors.

printf("%f", z);
return 0;
}