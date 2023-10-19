#include <stdio.h>
#include <math.h>
int main() {
    double A, B, C, alas, tinggi, keliling, luas;
    scanf("%lf", &A);
    scanf("%lf", &B);
    C = sqrt(A * A + B * B);
    alas = B;
    tinggi = A;
    keliling = A + B + C;
    luas = 0.5 * A * B;
    printf("Alas = %.2lf cm\n", alas);
    printf("Tinggi = %.2lf cm\n", tinggi);
    printf("Keliling = %.2lf cm\n", keliling);
    printf("Luas = %.2lf cm^2\n", luas);
    return 0;
}