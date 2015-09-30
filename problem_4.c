/* 
 * File:   problem_4.c
 * Author: Joe
 *
 * Created on August 26, 2015, 1:07 PM in Fatka
 * 
 * Project Euler Problem 4:
 * A palindromic number reads the same both ways. 
 * The largest palindrome made from the product of two 2-digit numbers is 
 * 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int get_num_length(int num) {
    int num_length = 0;
    
    while(num != 0) {
        num_length++;
        
        num /= 10;
    }
    
    return num_length;
}

int power(int base, int exp) {
    int result = 1;
    
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    
    return result;
}

int reverse_num(int num) {
    int reversed_num = 0;
    
    int num_length;
    
    while(num != 0) {
        num_length = get_num_length(num);
        
        reversed_num += (num % 10) * power(10, num_length - 1);
        
        num /= 10;
    }
    
    return reversed_num;
}

bool num_is_palindrome(int num) {
    int reversed_num = reverse_num(num);
    
    return num == reversed_num;
}

int main(int argc, char** argv) {
    int max = 0;
    int max_mult_1, max_mult_2;
    int product;
    
    for(int num_1 = 100; num_1 <= 999; num_1++) {
        for(int num_2 = 100; num_2 <= 999; num_2++) {
            
            product = num_1 * num_2;
            
            if(num_is_palindrome(product) && product > max) {
                max = product;
                max_mult_1 = num_1;
                max_mult_2 = num_2;
            }
        }
    }
    
    printf("The max product is %d. It is equal to %d multiplied by %d.", max, max_mult_1, max_mult_2);
    
    return (EXIT_SUCCESS);
}