#include <stdio.h>
#include <math.h>
/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
    // if (n < 2) {
    //     return 0;
    // }
    int sqrt_val = sqrt(n);

    for (int i = 2; i <= sqrt_val; i++){
        if (n % i == 0)
        {
            return 0;
        }
    }
    
    // TODO: check if n is prime using loop up to sqrt(n)
    return 1; // placeholder
}

int main(void) {
    int n;

    printf("Enter an integer n (>= 2): ");
    scanf("%d", &n);

    while(n < 2 ) {
        printf("Error: n must be 2 or greater.\n");
        scanf("%d", &n);
    }

    is_prime(n);

   
    // printf("Primes up to %d: ", n);
    // for(int i =2; i<= n; i++){
    //     if(is_prime(i)){
    //         printf("%d ", i);
    //     }
    // }
    // printf("\n");
    

    // TODO: validate input and print all primes up to n

    return 0;
}
