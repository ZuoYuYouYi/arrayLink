//
// Created by zuoyu on 5/28/19.
//
#include "array.h"
#include <stdlib.h>

#define BLOCK 5

Array array_Creat(int init_Size) {
    Array array;
    array.size = init_Size;
    array.elements = (int *) malloc(sizeof(int) * init_Size);
    return array;
}


void array_Free(Array *array) {
    free(array->elements);
    array->elements = NULL;
    array->size = 0;
}

int array_Size(const Array *array) {
    return array->size;
}

void array_Set(Array *array, int index, int value) {
    if (index >= array->size) {
        array_Inflate(array, index + BLOCK - (array->size));
    }
    array->elements[index] = value;
}

int array_Get(const Array *array, int index) {
    if (index >= array->size) {
        return 0;
    }
    return array->elements[index];
}

void array_Inflate(Array *array, int more_Size) {
    int *newElements = malloc(sizeof(int) * (array->size + more_Size));
    for (int i = 0; i < array->size; ++i) {
        newElements[i] = array->elements[i];
    }
    free(array->elements);
    array->elements = newElements;
    array->size += more_Size;
}
