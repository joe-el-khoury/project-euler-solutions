/* 
 * File:   problem_6.c
 * Author: Joe
 *
 * Created on August 27, 2015, 1:29 AM in Fatka
 * 
 * Project Euler Problem 6:
 * The sum of the squares of the first ten natural numbers is,
 * 1^2 + 2^2 + ... + 10^2 = 385
 * The square of the sum of the first ten natural numbers is,
 * (1 + 2 + ... + 10)^2 = 55^2 = 3025
 * Hence the difference between the sum of the squares of the first 
 * ten natural numbers and the square of the sum is 3025 − 385 = 2640.
 * Find the difference between the sum of the squares of the first one hundred 
 * natural numbers and the square of the sum.
 */

#include <stdio.h>
#include <stdlib.h>

int power(int base, int exp) {
    int result = 1;
    
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    
    return result;
}

int main(int argc, char** argv) {
    int sum_of_squares = 0;
    int square_of_sums = 0;
    
    int difference;
    
    int lower_num = 1;
    int upper_num = 100;
    
    for(int i = lower_num; i <= upper_num; i++) {
        sum_of_squares += power(i, 2);
    }
    
    printf("The sum of the squares of numbers from %d to %d is %d.\n",
            lower_num, upper_num, sum_of_squares);
    
    for(int i = lower_num; i <= upper_num; i++) {
        square_of_sums += i;
    }
    
    square_of_sums = power(square_of_sums, 2);
    
    printf("The square of the sums of numbers from %d to %d is %d.\n",
            lower_num, upper_num, square_of_sums);
    
    difference = square_of_sums - sum_of_squares;
    
    printf("The difference between them is %d.", difference);
    
    return (EXIT_SUCCESS);
}

