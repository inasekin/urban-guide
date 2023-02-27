#include <stdio.h>
#include <stdlib.h>

int cycleExample() {
    int i;
    int mas[3];

    mas[0] = 4444;
    mas[1] = 3333;
    mas[2] = 2222;
    i = 0;
    while(i < 3) {
        printf("%d", mas[i]);
        i = i + 1;
    }

    return 0;
}

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
    printf("\n");
    cycleExample();
}