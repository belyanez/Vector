#include <stdio.h>
#include <stdlib.h>
#include "../libs/vector.h"
Vector initVector(size_t size){
    Vector newVector = NULL;
    newVector = malloc(sizeof(Vector));
    newVector->elements = calloc(size, sizeof(float));
    newVector->n_elements = size;
    return newVector;
}
void printArray(size_t n, float array[n]){
    for(int i=0;i<n;i++){
        printf("Memory: %p, index: %d element %f \n", &array[i], i, array[i]);
    }
}
void setVector(size_t n, float array[n], float vec){
    for(int i=0; i<n;i++){
        array[i] = vec;
    }
}
