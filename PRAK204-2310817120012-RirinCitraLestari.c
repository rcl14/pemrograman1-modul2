#include <stdio.h>
#include <math.h>

int main() {
    double jari_jari, tinggi, volume, luas, keliling;

    scanf("%lf", &jari_jari);
    scanf("%lf", &tinggi);

    volume = M_PI * jari_jari * jari_jari * tinggi;
    luas = 2 * M_PI * jari_jari * (jari_jari + tinggi);
    keliling = 2 * M_PI * jari_jari;

    printf("Volume = %.2lf\n", volume);
    printf("Luas = %.2lf\n", luas);
    printf("Keliling = %.2lf\n", keliling);

    return 0;
}
