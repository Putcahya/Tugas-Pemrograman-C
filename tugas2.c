#include <stdio.h>
#include <stdint.h>
int main () {
int8_t a = 032;
int8_t b = 02;

printf("2. Menampilkan Bilangan dlm Format Oktal\n");
printf ("0%o + 0%o = 0%o\n", a, b, (a+b));
printf ("0%o - 0%o = 0%o\n", a, b, (a-b));
printf ("0%o * 0%o = 0%o\n", a, b, (a*b));
printf ("0%o / 0%o = 0%o\n", a, b, (a/b));
printf ("0%o %% 0%o = 0%o\n", a, b, (a%b));
return 0;
}
