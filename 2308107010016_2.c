#include <stdio.h>

int main() {
    int year;

    printf("Selamat datang!\n");
    printf("Silakan masukkan tahun (hanya 4 digit): ");
    while (1) {
        if (scanf("%d", &year) != 1 || year < 1000 || year > 9999) {
            printf("Maaf, masukkan tahun yang valid (4 digit angka): ");
            while (getchar() != '\n'); // Membersihkan buffer input
            continue;
        }
        break;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d adalah tahun kabisat.\n", year);
    } else {
        printf("%d bukan tahun kabisat.\n", year);
    }

    return 0;
}
