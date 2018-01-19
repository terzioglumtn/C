#include <stdio.h>
int toplam(int a,int b);
int main(){
	int a=7,b=25;
	printf("%d",toplam(a,b));
}
int toplam(int a,int b){
	int i,sum=0;
	for(i=7;i<=25;i++){
		if(i%2!=0){
			sum=sum+i;
		}
	}
	return sum;
}
