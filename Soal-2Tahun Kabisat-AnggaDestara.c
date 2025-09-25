#include <stdio.h>

int main() {
    int t;

    printf("Masukkan tahun: ");
    scanf("%d", &t);

    if ((t % 400 == 0) || (t % 4 == 0 && t % 100 != 0)) {
        printf("Tahun kabisat.\n");
    } else {
        printf("Bukan tahun kabisat.\n");
    }

    return 0;
}
