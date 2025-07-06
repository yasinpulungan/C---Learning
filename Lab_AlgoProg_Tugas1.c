#include <stdio.h>

int main() {
    char nama[50];
    float bermain, belajar, tidur;
    float totalJam, selisihMainTidur, dikali7, dibagi3, rata;

    // Input nama siswa
    printf("Masukkan nama siswa TK: ");
    fgets(nama, sizeof(nama), stdin);

    // Input jam aktivitas
    printf("Berapa jam bermain hari ini? ");
    scanf("%f", &bermain);

    printf("Berapa jam belajar hari ini? ");
    scanf("%f", &belajar);

    printf("Berapa jam tidur hari ini? ");
    scanf("%f", &tidur);

    // Operasi aritmatika
    totalJam = bermain + belajar + tidur;
    selisihMainTidur = tidur - bermain;
    dikali7 = totalJam * 7; // total selama seminggu
    dibagi3 = totalJam / 3;
    rata = (bermain + belajar + tidur) / 3;

    // Output
    printf("\n=== Rekap Aktivitas Harian %s===\n", nama);
    printf("Total waktu hari ini: %.2f jam\n", totalJam);
    printf("Selisih waktu tidur dan bermain: %.2f jam\n", selisihMainTidur);
    printf("Total waktu selama seminggu (perkiraan): %.2f jam\n", dikali7);
    printf("Waktu dibagi rata ke 3 kegiatan: %.2f jam\n", dibagi3);
    printf("Rata-rata waktu per aktivitas: %.2f jam\n", rata);

    return 0;
}
