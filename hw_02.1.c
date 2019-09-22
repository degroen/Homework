#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double D = b*b - 4*a*c;

	if (a==0){
		printf("Ошибка: не квадратное уравнение\n");
		return 1;
	}

	if (D<0){
		printf("Нет корней\n");
	}
	if (D==0){
		double x;
		x = -b/2/a;
		printf("Один корень x = %f\n", x);
	}
	if (D>0){
		double x1, x2;
		x1 = (-b-sqrt(D))/2/a;
		x2 = (-b+sqrt(D))/2/a;
		printf("Два корня x1 = %f, x2 = %f\n", x1, x2);
	}
}
