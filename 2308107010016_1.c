#include <stdio.h>

int main() {
    int menu;
    printf("Silakan pilih operasi konversi yang Anda inginkan:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            {
                int decimal, binary = 0, base = 1, remainder;
                printf("Masukkan bilangan desimal: ");
                scanf("%d", &decimal);

                while (decimal > 0) {
                    remainder = decimal % 2;
                    binary = binary + remainder * base;
                    decimal = decimal / 2;
                    base = base * 10;
                }

                printf("Biner: %d\n", binary);
            }
            break;
        case 2:
            {
                long int binary, decimal = 0, base = 1, remainder;
                printf("Masukkan bilangan biner: ");
                scanf("%ld", &binary);

                while (binary > 0) {
                    remainder = binary % 10;
                    decimal = decimal + remainder * base;
                    binary = binary / 10;
                    base = base * 2;
                }

                printf("Desimal: %ld\n", decimal);
            }
            break;
        case 3:
            {
                int decimal, octal = 0, base = 1, remainder;
                printf("Masukkan bilangan desimal: ");
                scanf("%d", &decimal);

                while (decimal > 0) {
                    remainder = decimal % 8;
                    octal = octal + remainder * base;
                    decimal = decimal / 8;
                    base = base * 10;
                }

                printf("Octal: %d\n", octal);
            }
            break;
        case 4:
            {
                long int octal, decimal = 0, base = 1, remainder;
                printf("Masukkan bilangan octal: ");
                scanf("%ld", &octal);

                while (octal > 0) {
                    remainder = octal % 10;
                    decimal = decimal + remainder * base;
                    octal = octal / 10;
                    base = base * 8;
                }

                printf("Desimal: %ld\n", decimal);
            }
            break;
        default:
            printf("Input tidak valid, silakan pilih opsi yang benar.\n");
    }

    return 0;
}
