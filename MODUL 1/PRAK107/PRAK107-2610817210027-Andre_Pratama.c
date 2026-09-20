#include <stdio.h>

int main() {
    int side1 = 4;
    int side2 = 5;
    int side3 = 7;
    int totalSum = side1 + side2 + side3;
    int cost_per_meter = 85000;
    int totalCost = totalSum * cost_per_meter;

    printf("Diketahui :\n");

    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", side1, side2, side3);

    printf("Keliling Tanah Pak Dengklek adalah %d\n", totalSum);

    printf("Harga tanah Per Meter adalah %d\n", cost_per_meter);

    printf("Jawaban :\n");

    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d \n", totalCost );

    return 0;
}

 