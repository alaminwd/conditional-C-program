#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature value ");
    scanf("%f", &temperature);

    if (temperature < 0) {
        printf("Freezing\n");
    } else if (temperature >= 0 && temperature <= 10) {
        printf("Very Cold\n");
    } else if (temperature >= 11 && temperature <= 20) {
        printf("Cold\n");
    } else if (temperature >= 21 && temperature <= 30) {
        printf("Normal\n");
    } else if (temperature >= 31 && temperature <= 40) {
        printf("Hot\n");
    } else {
        printf("Very Hot\n");
    }

    return 0;
}
