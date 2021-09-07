#include <stdio.h>
#include <stdlib.h>
#include "../libs/vector.h"

int main(void){
    Vector dynamicVector = NULL;
    dynamicVector = initVector(SIZE);
    setVector(SIZE, dynamicVector->elements, VEC);
    printArray(dynamicVector->n_elements, dynamicVector->elements);
}
