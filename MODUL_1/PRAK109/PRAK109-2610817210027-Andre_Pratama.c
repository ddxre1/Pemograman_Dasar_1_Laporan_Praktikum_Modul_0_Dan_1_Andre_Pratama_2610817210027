#include <stdio.h>

int main() {
    int totalTroops = 958730;
    int totalHeroes = 5;
    
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d \n", totalTroops);
    printf("Jumlah pahlawan = %d \n", totalHeroes);

    int troopsPerHero = totalTroops / totalHeroes;

    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", troopsPerHero);

    return 0;
}

