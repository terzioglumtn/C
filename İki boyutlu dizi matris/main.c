// kullanýcýdan dizi elemanlarýný alma ve bastýrma...
#include <stdio.h>
void yazdir(int matris[][4],int size);
int main(){
	int i,j;
	int matris[3][4];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d\n",&matris[i][j]);
		}
		printf("\n");
	}
	yazdir(matris,3);
}
void yazdir(int matris[][4],int size)	{
	int a,b;
	
 for(a=0;a<3;a++){
				printf("%d.satir :",a+1);

		for(b=0;b<4;b++){
			printf("%d ",matris[a][b]);
		}
		printf("\n");
	}
	
	}
