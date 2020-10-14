//Angel Avelar-Bonilla
//10/13/2020
//Prints 1 - 5 factorial

#include <stdio.h>


int factorial(int x)
{
    if (x == 1) return 1;

    return x * factorial(x - 1);

}

int main()
{
    for (int i = 1; i <= 5; i++){
        printf("%d\t%d\n",i,factorial(i));
    }

    return 0;
}

