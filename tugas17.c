#include <stdio.h>
#include <time.h>
#include <limits.h>
int main() {
    time_t starttime, endtime;
    struct tm starttm, endtm;
    double seconds;
    starttime = time (NULL);
    starttm = *localtime (&starttime);
    /* awal proses */
    unsigned int i;
    for (i=0; i<400000000; i++) {
    ;
    }
    /* akhir proses */
    endtime = time (NULL);
    endtm = *localtime (&endtime);
    seconds = difftime (mktime (&endtm), mktime (&starttm));
    printf("17. Menghitung Waktu yg Diperlukan u/ Eksekusi Program\n");
    printf ("Waktu eksesuksi: %.4lf detik\n", seconds);
    return 0;
}