//Angel Avelar-Bonilla
//10/13/2020
//Prints the prime numbers from 1 to 100

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int x)
{
    if (x == 1 ) return false;

    for (int i = 2; i < x; i++){
        if (x % i == 0)
            return false;
    }

    return true;

}

int main()
{
    for (int x = 1; x <= 100; x++ ) {
        if (isPrime(x))
        printf("%d\n", x);
    }

    return 0;
}
