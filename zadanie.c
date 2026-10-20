#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    int i;
    double sum = 1.0;
    double fact = 1.0;
    printf("Введите n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact = fact * i;
        sum = sum + (1.0 / fact);
    }
    printf("Сумма обратных факториалов до %d: %.6lf\n", n, sum);
    return 0;
}