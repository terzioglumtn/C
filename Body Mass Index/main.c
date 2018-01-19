#include <stdio.h>
void main(){
	float W,H,t;
	printf("Enter your weight W(kg)=");
	scanf("%f",&W);
	printf("Enter your height H(m)=");
	scanf("%f",&H);
	t=W/(H*H);
	printf("BMI=%f\n",t);
	if(t>=30){
		printf("\aObese\n");
	}
	else if(t>=25){
		printf("\aOwerweight\n");
	}
	else if(t>=18.5){
		printf("\aNormal\n");
	}
	else if(t<18.5){
		printf("\aUnderweight\n");
	}
	system("pause");
	
	
}
