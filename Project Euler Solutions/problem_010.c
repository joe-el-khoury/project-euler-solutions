/* 
 * File:   problem_10.c
 * Author: Joe
 *
 * Created on August 28, 2015, 11:58 PM in Fatka
 * 
 * Project Euler Problem 10:
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * Find the sum of all the primes below two million.
 * 
 * Yet another prime number problem.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int num) {
    if(num <= 1) {
        return false;
    
    } else if(num % 2 == 0 && num != 2) {
        return false;
    
    } else {
        for(int i = 3; i < num; i++) {
            if(num % i == 0) {
                return false;
            }
        }
    }
    
    return true;
}

int main(int argc, char** argv) {
    unsigned long long sum = 0;
    
    for(int i = 0; i < 100; i++) {
        if(is_prime(i)) {
            sum += i;
            printf("\n%d is prime.\n", i);
            printf("The sum is now %lld.\n", sum);
        }
    }
    
    return (EXIT_SUCCESS);
}