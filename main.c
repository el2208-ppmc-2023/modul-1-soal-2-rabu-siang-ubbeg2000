/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 1 - Overview of the C Language
 *   Hari dan Tanggal    : Rabu, 8 Febuari 2023
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int jdwStella, jdwSteven, overlap;
    int maxOverlap = 0;
    int dayOfMaxOverlap = 1;

    for (int day = 1; day < 6; day++)
    {

        printf("Jadwal hari ke-%d untuk Stella: ", day);
        scanf("%d", &jdwStella);

        printf("Jadwal hari ke-%d untuk Steven: ", day);
        scanf("%d", &jdwSteven);

        overlap = 0;
        for (int digit = 0; digit < 10; digit++)
        {

            if (((jdwStella % 10) == 0) && ((jdwSteven % 10) == 0))
            {
                overlap += 1;
            }

            jdwStella /= 10;
            jdwSteven /= 10;
        }

        if (overlap > maxOverlap)
        {
            maxOverlap = overlap;
            dayOfMaxOverlap = day;
        }

        printf("\n");
    }

    printf("Jadwal terbaik untuk Stella dan Steven adalah hari ke-%d dengan overlap %d jam.\n\n", dayOfMaxOverlap, maxOverlap);

    return 0;
}
