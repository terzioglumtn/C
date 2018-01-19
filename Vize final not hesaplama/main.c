//vize final ortalamasý hesaplama...
#include <stdio.h>
void main(){
	int vize1,vize2,final;
	float ort,avg;
	printf("1.vize=");
	scanf("%d",&vize1);
	printf("2.vize=");
	scanf("%d",&vize2);
	printf("final=");
	scanf("%d",&final);
	ort=(vize1+vize2+final)/3.0;
	printf("ort=%.2f\n",ort);
	if(ort>60)
	{
		printf("gectiniz");
	}
	else if(ort>=50&&ort<59)		
	{
		printf("bute gir\n");
	}
    else if(ort<50)
	{
    	printf("kaldiniz");
	}
}
