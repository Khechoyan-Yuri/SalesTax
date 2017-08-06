/*This program will input the subtotal and the tax rate, it ,
the program will multiply them together (ST * TR = Sub Total and Tax Rate) to output the sales tax.
Then take the Sales tax amount and add it to the Sub Total to output the Grand Total to the user.

Date created: 9-2-15
Date Modified: 9-29-15
Yuri Khechoyan
*/

#include <stdio.h>

int main (void){

    //Declare Variables
    float subTotal;
    float taxRate;
    float salesTax;
    float grandTotal;
    int size;
    int A;
    int i;

    //Input Sub Total (formated xxx.xx)
  printf("Please enter Subtotal\n");
    scanf("%f", &subTotal);

    while (subTotal < 0){
       printf("The subtotal cannot be 0.\n");
        printf("Please enter another subtotal.\n");
        scanf("%f", &subTotal);
    }

    //Input Tax Rate (formatted: .0xx)
  printf("Please enter your Tax Rate in decimal form\n");
    scanf("%f", &taxRate);

    //Determine if Tax Rate is too High
    if (taxRate >= 0.1){
        salesTax = (subTotal*taxRate);
        grandTotal = (subTotal+salesTax);
        printf("Your Tax Rate is too High!\n");
    }

    else {
        salesTax = (subTotal*taxRate);
        grandTotal = (subTotal+salesTax);
    }
    //Calculate: salesTax = subTotal*taxRate
 salesTax = (subTotal*taxRate);

    //Calculate: grandTotal = subTotal+salesTax
grandTotal = (subTotal+salesTax);

    //Output Sales Tax ad Grand Total
printf("Your Sales Tax = %.2f\n", salesTax);
printf("Your Grand Total = %.2f\n", grandTotal);
}
