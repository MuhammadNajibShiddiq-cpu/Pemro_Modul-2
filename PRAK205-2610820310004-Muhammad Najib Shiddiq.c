#include <stdio.h>
#include <math.h>

int main() {
    double a, b;

    printf("Masukkan A dan B: ");
    scanf("%lf %lf", &a, &b);

    double tinggi = a;
    double alas = sqrt(b * b - a * a);
    double keliling = alas + tinggi + b;
    double luas = alas * tinggi / 2.0;

    printf("Alas = %g cm\n", alas);
    printf("Tinggi = %g cm\n", tinggi);
    printf("Keliling = %g cm\n", keliling);
    printf("Luas = %g cm^2\n", luas);

    return 0;
}