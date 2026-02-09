#include <stdio.h>
#include "array.h"

int main(){

    printf("=== ARRAY ===\n\n");

    Array A;

    /* init/create */
    initArray(&A);
    printf("[INIT] Array berhasil diinisialisasi.\n");

    /* isEmpty */
    printf("[ISEMPTY] Apakah array kosong? %s\n",
           isEmptyArray(A) ? "Ya" : "Tidak");

    /* insert */
    printf("\n[INSERT] Menambah data: 10, 20, 30\n");
    insertArray(&A, 10);
    insertArray(&A, 20);
    insertArray(&A, 30);
    printArray(A);

    /* length */
    printf("[LENGTH] Jumlah elemen saat ini: %d\n",
           lengthArray(A));

    /* search */
    int cari = 20;
    printf("\n[SEARCH] Mencari nilai %d...\n", cari);

    int hasil = searchArray(A, cari);

    if(hasil != -1){
        printf("   Ketemu! Data %d ada di index: %d\n",
               cari, hasil);
    }

    /* delete/remove */
    printf("\n[REMOVE] Menghapus angka 20...\n");
    deleteArray(&A, 20);
    printArray(A);

    printf("[LENGTH] Jumlah elemen sekarang: %d\n",
           lengthArray(A));

    /* destroy */
    printf("\n[DESTROY] Menghancurkan seluruh isi array...\n");
    destroyArray(&A);

    printf("[ISEMPTY] Apakah array sudah kosong kembali? %s\n",
           isEmptyArray(A) ? "Ya" : "Tidak");

    return 0;
}
