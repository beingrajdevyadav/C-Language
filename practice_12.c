// # In a company an empolyee is paid as under :
// If his basic salary is less than Rs. 1500, then HRA = 10% of basic salry and DA = 90% of basic salry. If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salry. If the employee's salary is input through the keyboard write a program to find his gross salary.


#include <stdio.h>
int main(){
    float bs, gs, da, hra;
    printf("Enter basic salary : ");
    scanf("%f", &bs);

    if(bs < 1500){
        hra = bs * 10 / 100;
        da = bs * 90 / 100;
    } else{
        hra = 500;
        da = bs * 98 / 100;
    }

    gs = bs + hra + da;
    printf("Gross salary = Rs. %f", gs);


    return 0;
}