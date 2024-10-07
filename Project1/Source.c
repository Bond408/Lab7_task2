#include <stdio.h>
#include <locale.h>
#include <math.h> // for the pow function

void main()
{
    int x, y;
    char c;
    setlocale(LC_ALL, "RUS");
    printf("Введите пример: ");

    // Add space between format specifiers to handle whitespace properly
    scanf_s("%d%c%d", &x, &c, &y);

    switch (c)
    {
    case '+':
        printf("=%d\n", x + y);
        break;
    case '-':
        printf("=%d\n", x - y);
        break;
    case '*':
        printf("=%d\n", x * y);
        break;
    case '/':
        if (y == 0)  // Check for division by zero
            printf("Ошибка: деление на ноль.\n");
        else
            printf("=%d\n", x / y);
        break;
    default:
        printf("Неизвестная операция.\n");
    }
    return;
}