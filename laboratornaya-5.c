#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>

int Task1()
{
	printf("ЗАДАНИЕ 1\n");

	double gr; //переменная для хранения угла в градусах

	printf("Введите угол в градусах:\n");
	scanf("%lf", &gr); //считываем вещественное число
	
	double rad = gr * M_PI / 180.0; //переводим градусы в радианы
	double result = sin(rad);

	printf("sin(%.2f) = %.6f\n",  gr, result);
}

int Task2()
{
	printf("ЗАДАНИЕ 2\n");

	double x;
	const double k = -4.0;
	double a, b, y;

	printf("Введите значение x (для контрольного примера введите 1.3):\n");
	scanf("%lf", &x);

	a = log(fabs(-k * x)); //fabs модуль для doble
	b = exp(2 * x) + a * x; //exp экспонента
	y = x * pow(a, 3) + pow(b, 2); //pow возведение в степень

	printf("x = %.1f, y = %.1f\n", x, y);

	printf("ЗАДАНИЕ 3\n");

	int A = (int)a;
	int B = (int)b;
	int C = (int)y;

	printf("Целые части: A = %d, B = %d, C = %d\n", A, B, C);

	int cond_a = ((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0));
	int cond_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
	printf("Условие а) %d\n", cond_a);//1-да, 0-нет
	printf("Условие б) %d\n", cond_b);//1-да, 0-нет
}


int main()
{
	setlocale(LC_CTYPE, ".UTF-8");

	Task1();
	Task2();
	return 0;
}