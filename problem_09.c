// If a character is entered through the keyword, write a program to determine whether the character is a capital letter, a small case letter, a digit or a special symbol.

// the following table shows the range of ASCII values for various characters :

// A-Z     65-90
// a-z     97-122
// 0-9     48-57
// special symbols     0-47 , 58-64 , 91-96, 123-127


#include <stdio.h>
int main(){

    char ch;
    printf("\n Enter a character from the keyboard : ");
    scanf("%c", &ch);


    if(ch >= 65 && ch <= 90){
        printf("An Uppercase Letter.");
    }else if(ch >= 97 && ch <= 122){
        printf("A Lowercase Letter.");
    }else if(ch >= 48 && ch <= 57){
        printf("A Digit.");
    }else if((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127)){
        printf("A Special Symbol.");
    }else{
        printf("Wrong Input!");
    }


    return 0;
}
