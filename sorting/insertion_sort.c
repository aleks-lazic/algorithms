#include <stdio.h>
#include "../utils/helper.h"

/*
Imagine you have some cards in your hand and another pile on the table
whenever you pick a card from the table (the key), 
you shift the cards bigger than the key on the right until you find
the appropriate place for the card
*/
int *insertion_sort (int *input, int size){
    int key, j = 0;
    for (int i = 1 ; i<size ; i++){
        key = input[i]; 
        j = i -1;
        while(input[j] > key && j >= 0){
            input[j+1] = input[j];
            j--;
        }
        input[j+1] = key;
    }
    return input;
}

int main () {
    int size = 10;
    int *a = generate_int_array(size);
    print_array(a, size);
    insertion_sort(a, size);
    print_array(a, size);
    return 0;
}