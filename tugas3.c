#include <stdio.h>

void bin (long n) {
    if (n) {
        bin (n >> 1);
        printf ("%c", (n&1) ? '1':'0');
        }
        }

int main () {
    int i;

    printf("3. Menampilkan Bilangan dlm Format Biner\n");
    for (i=1; i<=32;i++) {
        printf ("%2d = 0b",i);
        bin (i);
        printf("\n");
        }
        return 0;
}