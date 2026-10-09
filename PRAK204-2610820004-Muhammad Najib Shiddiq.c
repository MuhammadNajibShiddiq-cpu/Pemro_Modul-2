#include <stdio.h>

int main() {
    double r, t;

    printf("Masukkan jari-jari dan tinggi : ");
    scanf("%lf %lf", &r, &t);

    double pi = 22.0 / 7.0;

    double volume = pi * r * r * t;
    double luas = 2.0 * pi * r * (r + t);
    double keliling = 2.0 * pi * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}