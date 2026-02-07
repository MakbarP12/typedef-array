#ifndef ARRAY_H
#define ARRAY_H

#define MAX 100

typedef struct {
    int data[MAX];
    int length;
} Array;

/* pointer/global tidak perlu, array dikirim parameter */

void initArray(Array *A);
int isEmptyArray(Array A);

/* simbolik seperti linked list */
void allocate(int x);
void deallocate(int x);

void insertArray(Array *A, int x);
int searchArray(Array A, int x);
void deleteArray(Array *A, int x);
void destroyArray(Array *A);
int lengthArray(Array A);
void printArray(Array A);

#endif
