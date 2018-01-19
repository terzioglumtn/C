#include <stdio.h>
#include <stdlib.h>

int main() {
	char deneme[50];
	int i,harf=0,rakam=0;
	puts("Lutfen rastgele bir ifade giriniz");
	gets(deneme);
	
	for(i=0;deneme[i];i++){
		if(deneme[i]>='A' && deneme[i]<='Z'){
			harf++;
		}
		if(deneme[i]>='a'&& deneme[i]<='z'){
			harf++;
		}	
		if(deneme[i]>='0' && deneme[i]<='9'){
			rakam++;
		}
	}
	
	printf("\n%d tane harf vardir\n",harf);
	printf("%d tane rakam vardir",rakam);
	
	return 0;
	
}
