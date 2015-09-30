/* 
 * File:   main.c
 * Author: Joe
 *
 * Created on August 27, 2015, 1:16 AM in Fatka
 * 
 * Project Euler Problem 5:
 * 2520 is the smallest number that can be divided by each of the numbers 
 * from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of 
 * the numbers from 1 to 20?
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool divisible_in_range(int num, int lower_bound, int upper_bound) {
    for(int i = lower_bound; i <= upper_bound; i++) {
        if(num % i != 0) {
            return false;
        }
    }
    
    return true;
}

int main(int argc, char** argv) {
    int lower_bound = 1;
    int upper_bound = 5;
    
    int num = 1;
    
    while(true) {
        if(divisible_in_range(num, lower_bound, upper_bound)) {
            break;
        } else {
            num++;
        }
    }
    
    printf("The number %d is divisible by all numbers in the range %d - %d."
            , num, lower_bound, upper_bound);
    return (EXIT_SUCCESS);
}

