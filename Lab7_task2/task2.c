#include <stdio.h>
#include <locale.h>
void main()
{
	float x, y;
	char c;
	setlocale(LC_ALL, "RUS");
	printf("������� ������: ");
	scanf_s("%f%c%f", &x, &c, 1, &y);
	switch (c)
	{
	case '+':
		printf("=%f\n", x + y);
		break;
	case '-':
		printf("=%f\n", x - y);
		break;
	case '*':
		printf("=%f\n", x * y);
		break;
	case '/':
		printf("=%f\n", x / y);
		break;
	case '^':
		printf("=%f\n", x * x);
		break;
	default:
		printf("����������� ��������.");
	}
	return;
}