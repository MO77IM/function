#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double equation(double a1, double b1, double c1, double a2, double b2, double c2);
double xiaoshu(double num);
int rounding(double num);

int main(){
	double a1,b1,c1,a2,b2,c2;
	scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &c1, &a2, &b2, &c2);
	equation(a1,b1,c1,a2,b2,c2);
	xiaoshu(2.56);
	rounding(2.56);
	rounding(2.44);
	rounding(-2.56);
	rounding(-2.44);
    return 0;
}

double equation(double a1, double b1, double c1, double a2, double b2, double c2){
	double x1,x2;
	double d;
	d = a1*b2-a2*b1;
	if(d == 0 && c1*b2 != b1*c2)
	    printf("no root\n");
	else if(d == 0 && c1*b2 == b1*c2)
	    printf("there are infinity roots\n");
	else{
		x1 = (c1*b2-c2*b1)/d;
		x2 = (a1*c2-a2*c1)/d;
    }
	printf("x1 = %lf, x2 = %lf\n", x1, x2);
	return 0;
}

double xiaoshu(double num){
	int a;
	double b;
	a = (int)num;
	if(a < 0)
	  b = num + a;
	else
	  b = num - a;
	printf("%lf = %d + %lf\n", num, a, b);
	return b;
}

int rounding(double num){
	double a;
	int result;
	if(num < 0)
	  a = num - (int)num;
	else
	  a = num - (int)num;
	if(a >= 0.5)
      result = (int)num+1;
    else if(a <= -0.5)
      result = (int)num-1;
	else
      result = (int)num;
	printf("%d\n", result);   
	return result;  
}
