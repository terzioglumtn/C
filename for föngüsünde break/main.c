//break ve continue örneði...
#include <stdio.h>
void main(){
	int i,a,toplam=0;
	for(i=1;i<=5;i++){
		printf("%d.sayi=",i);
		scanf("%d",&a);
		if(a<0){
			break;
		}
	toplam=toplam+a;
	
	}
	printf("\nhello\n")	;
	printf("%d",toplam);
}
