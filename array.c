#include <stdio.h>
#include "array.h"

/* init/create */
void initArray(Array *A){
    A->length = 0;
}

/* isEmpty */
int isEmptyArray(Array A){
    return A.length == 0;
}

/* allocate */
void allocate(int x){
    printf("Alokasi memori untuk data %d (array statis)\n", x);
}

/* deallocate  */
void deallocate(int x){
    printf("Dealokasi data %d (array statis)\n", x);
}

/* insert */
void insertArray(Array *A, int x){
    allocate(x);

    A->data[A->length] = x;
    A->length++;
}

/* search */
int searchArray(Array A, int x){
    for(int i=0; i<A.length; i++){
        if(A.data[i] == x)
            return i;
    }
    return -1;
}

/* delete/remove */
void deleteArray(Array *A, int x){
    int idx = searchArray(*A, x);

    if(idx == -1) return;

    deallocate(x);

    for(int i=idx; i<A->length-1; i++){
        A->data[i] = A->data[i+1];
    }

    A->length--;
}

/* destroy */
void destroyArray(Array *A){
    while(A->length > 0){
        deallocate(A->data[A->length-1]);
        A->length--;
    }
}

/* length */
int lengthArray(Array A){
    return A.length;
}

/* print */
void printArray(Array A){
    for(int i=0; i<A.length; i++){
        printf("%d ", A.data[i]);
    }
    printf("\n");
}
