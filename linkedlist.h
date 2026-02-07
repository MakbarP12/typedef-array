#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct tElmtList {
    int info;
    struct tElmtList *next;
} ElmtList;

extern ElmtList *first;

void initList();
int isEmptyList();
ElmtList* allocate(int x);
void deallocate(ElmtList *P);
void insertList(int x);
ElmtList* searchList(int x);
void deleteList(int x);
void destroyList();
int lengthList();
void printList();

#endif