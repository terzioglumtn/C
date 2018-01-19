#include <stdio.h>
#include <math.h>
double distance(double x1,double x2,double y1,double y2);
int main(){
	double x1,x2,y1,y2;
	printf("x1 degerini giriniz=");
	scanf("%lf",&x1);
	printf("x2 degerini giriniz=");
	scanf("%lf",&x2);
	printf("y1 degerini giriniz=");
	scanf("%lf",&y1);
	printf("y2 degerini giriniz=");
	scanf("%lf",&y2);
	printf("%.2lf",distance(x1,x2,y1,y2));
	
}
double distance(double x1,double x2,double y1,double y2){
	double x,y,a;
	x=(x2-x1)*(x2-x1);
	y=(y2-y1)*(y2-y1);
	a=sqrt(x+y);
	return a;
}
