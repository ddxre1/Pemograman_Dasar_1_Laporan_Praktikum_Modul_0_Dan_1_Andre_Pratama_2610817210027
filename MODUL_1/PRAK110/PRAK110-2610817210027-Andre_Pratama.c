#include <stdio.h>
#include <math.h>

int main () {
    int base = 5;
    int height = 12;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", base);
    printf("Tinggi = %d cm\n", height);

    float sideA = height;
    float sideC = base;
    float sideB = sqrt(pow(sideA, 2) + pow(sideC, 2));
    
    float totalLength = sideA + sideB + sideC;
    float area = (base * height) / 2.0;

    printf("\nJawab : \n");
    printf("Sisi A = %d cm\n", (int)sideA);
    printf("Sisi B = %d cm\n", (int)sideB);
    printf("Sisi C = %d cm\n", (int)sideC);
    printf("Keliling = %d cm\n", (int)totalLength);
    printf("Luas = %d cm\n", (int)area);

    return 0;
}
