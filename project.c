#include <stdio.h>

int main() {
    int units;
    float bill_amount = 0.0;      
    float final_amount = 0.0;     
    float extra_charges = 50.0;   
    float rate1 = 5.0;   
    float rate2 = 7.0;   
    float rate3 = 10.0;  

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid input! Units cannot be negative.\n");
        return 0;
    }

    if (units <= 100) {
        bill_amount = units * rate1;
    } 
    else if (units <= 200) {
        bill_amount = (100 * rate1) + (units - 100) * rate2;
    } 
    else {
        bill_amount = (100 * rate1) + (100 * rate2) + (units - 200) * rate3;
    }

    final_amount = bill_amount + extra_charges;

    printf("\n----- ELECTRICITY BILL -----\n");
    printf("Units Consumed    : %d\n", units);
    printf("Energy Charges    : %.2f\n", bill_amount);
    printf("Extra Charges     : %.2f\n", extra_charges);
    printf("----------------------------\n");
    printf("Total Bill Amount : %.2f\n", final_amount);
    printf("----------------------------\n");

    return 0;
}