//Angel Avelar-Bonilla
//10/13/2020
//Prints 1 - 5 factorial

#include <stdio.h>

int main()
{
    puts("Please enter the 6 digit Account Number, Credit Limit (pre-reccession), and current balance");

    char accountNumber[6] = "";
    float creditLimit = 0;
    float balance = 0;

    for (int i = 0; i < 3; i++){
        scanf("%s %f %f", accountNumber, &creditLimit, &balance);
        printf("\n%s\tNew Limit: %.2f\t",accountNumber, creditLimit/2);

        if (balance > creditLimit/2)
        puts("CURRENT BALANCE EXCEEDS NEW LIMIT");
    }

    return 0;
}
