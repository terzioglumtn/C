//fonksiyonlar ile boþluklu kare yazdýrma...
#include <stdio.h>
void kare(int *p);
int main(){
	int a;
	printf("bir sayi giriniz=");
	scanf("%d",&a);
	kare(&a);
}
void kare(int *p){
	int i,k;
	for(i=1;i<=*p;i++){
		for(k=1;k<=*p;k++){
			if(i==1 || i==*p || k==1 || k==*p){
			
			printf("*");
		}
		else{
			printf(" ");
		}
		}
		printf("\n");
	}
}
