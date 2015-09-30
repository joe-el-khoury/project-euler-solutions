/* 
 * File:   problem_7.c
 * Author: Joe
 *
 * Created on August 27, 2015, 2:22 PM in Fatka
 * 
 * Project Euler Problem 7:
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
 * we can see that the 6th prime is 13.
 * What is the 10,001st prime number?
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int num) {
    if(num <= 1) {
        return false;
    
    } else if(num % 2 == 0) {
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
    int prime_count = 0;
    
    int num = 0;
    
    while(prime_count != 10001) {
        if(is_prime(num)) {
            prime_count++;
            printf("Prime is %d. Prime count is %d.\n", num, prime_count);
        }
        
        num++;
    }
    
    printf("The 10,001st prime number is %d.", num - 1);
    
    return (EXIT_SUCCESS);
}