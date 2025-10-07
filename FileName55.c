#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
int main()
{
	setlocale(LC_CTYPE, "");
	float x, y, z;
	puts("Введите значение: x, y, z");
	scanf("%f %f %f", &x, &y, &z);
	//float x, y, z;
	//x = -15.246;
	//y = 0.04642;
	//z = 2000.1;
	double a;
	a = log(pow(y,-sqrt(fabs(x))))*(x-(y/2))+sqrt(sin(atan(z)));
	printf("a принимает значение: %.3lf \n", a);
	return 0;
}