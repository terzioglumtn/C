#include <stdio.h>
#include <stdlib.h>

int main(){
	char a[100];
	int i;
	
	puts("enter text");
	gets(a);
	
	for(i=0;a[i];i++){
		a[0]=toupper(a[0]);
		if(a[i]=='.'){
			a[i+1]=toupper(a[i+1]);
		}
	}
	
	puts(a);
}
