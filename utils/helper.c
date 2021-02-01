#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RANDOM 50

int *generate_int_array(int size){
    //allocate memory for array
    int* a = malloc(sizeof(int) * size);
    //generate random numbers
    srand(time(0));
    for(int i = 0 ; i<size ; i++){
        a[i] = rand() % MAX_RANDOM;
    }
    //return pointer to array
    return a;
}

void print_array(int *array, int size){
    printf("[");
    for(int i = 0 ; i<size ; i++){
        if(i == size-1)
            printf("%i", array[i]);
        else
            printf("%i, ", array[i]);
    }
    printf("]\n");
}
