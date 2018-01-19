#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	char deneme[50];
	int i,j,sayac=0;
	puts("Enter text:");
	gets(deneme);
	
	for(i=0;deneme[i];i++)
	{
		if(i==0)
		{//if(islower(deneme[i]))
			deneme[i]=toupper(deneme[i]);
		}
		if(deneme[i]=='.'||deneme[i]=='!'||deneme[i]=='?'||deneme[i]==' ')
		{//if(islower(deneme[i+1]))
			deneme[i+1]=toupper(deneme[i+1]);
		}
	}
	for(j=0;deneme[j];j++)
	{	printf("%c",deneme[j]);
		if(deneme[j]=='.'||deneme[j]=='!'||deneme[j]=='?'||deneme[j]==' ')
			printf("\n");	
	}
	//printf("%c",deneme[i+1]);
	
	/*if(97<=deneme[0] && deneme[0]<=122){
		deneme[0]=deneme[0]-32;
	}*/
	
	//puts(deneme);
	return 0;
}
