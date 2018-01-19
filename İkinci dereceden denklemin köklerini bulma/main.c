//denklemin kokunu bulan program...
#include <stdio.h>
#include <math.h>
void main(){
	int a,b,c,delta;
	float X1,X2;
	printf("a degerini gir=");
	scanf("%d",&a);
	printf("b degerini gir=");
	scanf("%d",&b);
	printf("c degerini gir=");
	scanf("%d",&c);
	delta=b*b-(4*a*c);
	printf("delta=%d\n",delta);
	if(delta<0){
		printf("reel kok yoktur");
	}
	if(delta==0){
		printf("cift katli kok vardir (X1=X2)");
		X1=(-b+(sqrt(delta)))/2*a;
		X2=(-b-(sqrt(delta)))/2*a;
		printf("%f %f",X1,X2);
	}
	if(delta>0){
		printf("2 farkli kok vardir (X1,X2)\n");
	    X1=(-b+(sqrt(delta)))/2*a;
		X2=(-b-(sqrt(delta)))/2*a;
		printf("1.kok(X1)=%.2f\n",X1);
		printf("2.kok(X2)=%.2f",X2);
	}
	
}
