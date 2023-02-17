#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    printf("Введите значение переменной x = ", x);
    scanf("%d", &x);
    printf("Введите значение переменной y = ", y);
    scanf("%d", &y);
    printf("Переменная x = %d\nПеременная y = %d\n");
    printf("%d * %d = %d", x, y, x * y); // Умножение
    printf("\n");
    printf("%d / %d = %d", x, y, x / y); // Деление
    printf("\n");
    printf("%d + %d = %d", x, y, x + y); // Сложение
    printf("\n");
    printf("%d - %d = %d", x, y, x - y); // Вычитание x - y
    return 0;
}