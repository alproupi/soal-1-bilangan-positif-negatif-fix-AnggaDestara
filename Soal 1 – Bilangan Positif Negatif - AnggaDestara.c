#include <stdio.h>

int main () {

    int n;

    printf("masukan bilangan :");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("bilangan positif");
    }else if (n < 0)
    {
        printf("bilangan negatif");

    }else
    {
        printf("bilangan nol");
    }

    return 0;
}