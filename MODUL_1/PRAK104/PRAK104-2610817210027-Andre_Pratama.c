#include <stdio.h>

int main() {
    int A = 400000;
    printf("Harga sepatu A adalah %d\n", A);

    int B = 350000;
    printf("Harga sepatu B adalah %d\n", B);

    float discountA = 0.13;
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", (int)(A * (1 - discountA)));

    float discountB = 0.21;
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", (int)(B * (1 - discountB)));

    return 0;
} 