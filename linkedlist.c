#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

ElmtList *first;

void initList() {
    first = NULL;
}

int isEmptyList() {
    return first == NULL;
}

ElmtList* allocate(int x) {
    ElmtList *P = (ElmtList*)malloc(sizeof(ElmtList));
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
    }
    return P;
}

void deallocate(ElmtList *P) {
    free(P);
}

void insertList(int x) {
    ElmtList *baru = allocate(x);
    if (baru != NULL) {
        if (isEmptyList()) {
            first = baru;
        } else {
            ElmtList *bantu = first;
            while (bantu->next != NULL) {
                bantu = bantu->next;
            }
            bantu->next = baru;
        }
    }
}

ElmtList* searchList(int x) {
    ElmtList *bantu = first;
    while (bantu != NULL) {
        if (bantu->info == x) return bantu;
        bantu = bantu->next;
    }
    return NULL;
}

void deleteList(int x) {
    ElmtList *hapus = first, *prev = NULL;
    while (hapus != NULL && hapus->info != x) {
        prev = hapus;
        hapus = hapus->next;
    }
    if (hapus == NULL) return;
    if (prev == NULL) {
        first = hapus->next;
    } else {
        prev->next = hapus->next;
    }
    deallocate(hapus); // Menggunakan fungsi deallocate sesuai materi
}

void destroyList() {
    ElmtList *hapus;
    while (first != NULL) {
        hapus = first;
        first = first->next;
        deallocate(hapus); // Membersihkan setiap node
    }
}

int lengthList() {
    int n = 0;
    ElmtList *bantu = first;
    while (bantu != NULL) {
        n++;
        bantu = bantu->next;
    }
    return n;
}

void printList() {
    ElmtList *bantu = first;
    while (bantu != NULL) {
        printf("%d -> ", bantu->info);
        bantu = bantu->next;
    }
    printf("NULL\n");
}