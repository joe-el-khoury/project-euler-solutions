/* 
 * File:   problem_3.c
 * Author: Joe
 *
 * Created on August 24, 2015, 7:53 PM in Fatka
 * 
 * Project Euler Problem 3:
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143?
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(long int num) {
    for(long int i = 1; i < num; i++) {
        if(num % i == 0 && i != 1) {
            return false;
        }
    }
    
    return true;
}

void print_primes(long int num) {
    for(long int i = 2; i < num; i++) {
        if(num % i == 0 && is_prime(i)) {
            printf("%ld is a prime factor of %ld.\n", i, num);
        }
    }
}

int main(int argc, char** argv) {
    unsigned long long int num_orig = 600851475143;
    unsigned long long int num = 600851475143;
    unsigned long long int i;
    
    for(i = 2; i < num; i++) {
        while(num % i == 0) {
            num /= i;
        }
    }
    
    printf("The largest prime factor of %lld is %lld.", num_orig, num);
    
    return (EXIT_SUCCESS);
}