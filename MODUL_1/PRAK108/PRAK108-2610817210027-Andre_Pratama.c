#include <stdio.h>

int main() {

    int totalDistance = 14;
    int totalLaps = 5;
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", totalLaps);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer \n", totalDistance);

    float distancePerLap = (float)totalDistance / totalLaps;
    float radius = distancePerLap / (2 * 3.14);

    printf("\nJawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", radius);

    return 0;
}