//fonksiyon ile not hesaplama...
#include <stdio.h>
void ortalama(float vize,float final);
int main(){
	int vize,final;
	printf("Vize=");
	scanf("%d",&vize);
	printf("Final=");
	scanf("%d",&final);
	ortalama(vize,final);
}
void ortalama(float vize,float final){
	float ortalama=vize*40/100+final*60/100;
	printf("%.2f",ortalama);
}

/*
//yukarýdaki kodun return kullanýlmýþ hali...
#include <stdio.h>
float ortalama(float vize,float final);
int main(){
	int vize,final;
	printf("Vize=");
	scanf("%d",&vize);
	printf("Final=");
	scanf("%d",&final);
	printf("%f",ortalama(vize,final));
}
float ortalama(float vize,float final){
	return vize*40/100+final*60/100; 
}
*/
