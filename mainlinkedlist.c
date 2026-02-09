#include <stdio.h>
#include "linkedlist.h"

int main() {
    printf("=== LINKED LIST ===\n\n");

    // init/create
    initList();
    printf("[INIT] List berhasil diinisialisasi.\n");

    // isEmpty
    printf("[ISEMPTY] Apakah list kosong? %s\n", isEmptyList() ? "Ya" : "Tidak");

    // allocate & add/insert
    // Fungsi insertList di dalam linkedlist.c sudah memanggil fungsi allocate()
    printf("\n[INSERT] Menambah data: 10, 20, 30\n");
    insertList(10);
    insertList(20);
    insertList(30);
    printList();

    // length
    printf("[LENGTH] Jumlah elemen saat ini: %d\n", lengthList());

    // search
    int cari = 20;
    printf("\n[SEARCH] Mencari nilai %d...\n", cari);
    ElmtList *hasil = searchList(cari);
    if(hasil != NULL) {
        printf("   Ketemu! Data %d ada di alamat memori: %p\n", hasil->info, (void*)hasil);
    }

    // del/remove & deallocate
    // Fungsi deleteList di linkedlist.c sudah memanggil fungsi deallocate()
    printf("\n[REMOVE] Menghapus angka 20...\n");
    deleteList(20);
    printList();
    printf("[LENGTH] Jumlah elemen sekarang: %d\n", lengthList());

    // destroy
    printf("\n[DESTROY] Menghancurkan seluruh isi list...\n");
    destroyList();
    printf("[ISEMPTY] Apakah list sudah kosong kembali? %s\n", isEmptyList() ? "Ya" : "Tidak");

    return 0;
}
