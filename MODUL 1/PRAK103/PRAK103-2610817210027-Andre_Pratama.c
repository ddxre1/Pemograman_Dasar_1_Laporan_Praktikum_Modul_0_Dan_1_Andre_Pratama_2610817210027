#include <stdio.h>

int main() {
    int a = 9;
    printf("Variabel a bernilai %d\n", a);

    int b = 6;
    printf("Variabel b bernilai %d\n", b);

    int x = 10;
    printf("Variabel x bernilai %d\n", x);

    int y = 7;
    printf("Variabel y bernilai %d\n", y);

    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", (float)(a + b) * x / y);

    return 0;
}