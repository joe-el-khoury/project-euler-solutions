/* 
 * File:   problem_9.c
 * Author: Joe
 *
 * Created on August 28, 2015, 7:12 PM in Fatka
 * 
 * Project Euler Problem 9:
 * A Pythagorean triplet is a set of three natural numbers, 
 * a is less than b less than c, for which,
 * a^2 + b^2 = c^2
 * For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int power(int base, int exp) {
    int result = 1;
    
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    
    return result;
}

int square(int n) {
    return power(n, 2);
}

bool are_pythagorean_triplets(int a, int b, int c) {
    return square(a) + square(b) == square(c);
}

int main(int argc, char** argv) {
    int c, product;
    
    int sum = 1000;
    
    bool found = false;
    
    for(int a = 1; a <= sum && !found; a++) {
        
        for(int b = 1; b <= sum && !found; b++) {
            
            printf("a : %d, b : %d, c : %d.\n", a, b, c);
            
            if(a < b) {
                
                c = sum - a - b;
                
            }
            
            if(are_pythagorean_triplets(a, b, c)) {
                
                printf("p.t - a : %d, b : %d, c : %d.\n", a, b, c);
                product = a * b * c;
                printf("Their product is %d.\n", product);
                found = true;
                
            }
            
        }
        
    }
    
    return (EXIT_SUCCESS);
}