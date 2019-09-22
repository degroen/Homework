#include <stdio.h>

double f1(double x){
	return -x*(x-4);
}

double f2(double x){
	return 0.5*(x-3)*(x-3);
}

int main(){
	double x, y;
	scanf("%lf%lf", &x, &y);
	if ((y<f1(x) ^ y>f2(x)) == 0)
		printf("Точка (%f; %f) принадлежит серой области\n", x, y);
	else
		printf("Точка (%f; %f) не принадлежит серой области\n", x, y);
}
