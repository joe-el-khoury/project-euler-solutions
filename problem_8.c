/* 
 * File:   problem_8.c
 * Author: Joe
 *
 * Created on August 27, 2015, 4:17 PM in Fatka
 * 
 * Project Euler Problem 8:
 * The four adjacent digits in the 1000-digit number that have the greatest 
 * product are 9 × 9 × 8 × 9 = 5832.
 * 
 * (number is shown)
 * 
 * Find the thirteen adjacent digits in the 1000-digit 
 * number that have the greatest product. What is the value of this product?
 */

#include <stdio.h>
#include <stdlib.h>

int char_to_int(char character) {
    return character - '0';
}

long long int get_max_product(char num_string[1000], int adj_num) {
    int start_index, end_index;
    
    long long int product = 1;
    long long int max_product = 1;
    
    for(int index = 0; index < 1000; index++) {
        
        start_index = index;
        end_index = start_index + adj_num;
        
        if(end_index > 999) {
            
            break;
            
        } else {
            
            while(start_index != end_index) {
                
                int current_num = char_to_int(num_string[start_index]);
                product *= current_num;
                start_index++;
                
            }
            
        }
        
        if(product > max_product) {
            
            max_product = product;
            
        }
        
        product = 1;
        
    }
    
    return max_product;
}

int main(int argc, char** argv) {
    char num_string[1000] = 
    "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
    
    printf("The max product in series is %lld.", get_max_product(num_string, 13));
    
    return (EXIT_SUCCESS);
}