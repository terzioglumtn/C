//switch case(if ile yapýlmýþ hali) örneði.ATM...
#include <stdio.h>
void main()
{
int islem,bakiye=1000,tutar;
printf("islemler\n1=Para Cekme\n2=Para Yatirma\n3=Havale Yapma\n4=Bakiye Sorgulama\n5=Kart iade\n\n\n");
printf("islem seciniz=");
scanf("%d",&islem);
if(islem==1)
	{

	    printf("Bakiyeniz=%d\n",bakiye);
	    printf("Cekmek istediginiz tutari giriniz=");
	    scanf("%d",&tutar);
	    if(tutar>1000){
	    printf("Yetersiz miktar girdiniz!\nYeniden giriniz=");
	    scanf("%d",&tutar);
	    }
	    bakiye=bakiye-tutar;
	    printf("Yeni Bakiyeniz=%d",bakiye);
	}
	else if(islem==2)
	{
	
	    printf("Bakiyeniz=%d\n",bakiye);
	    printf("Yatirmak istediginiz tutari giriniz=");
	    scanf("%d",&tutar);
	    bakiye=bakiye+tutar;
	    printf("Yeni Bakiyeniz=%d",bakiye);
	}
	else if(islem==3)
	{
	
	    printf("Bakiyeniz=%d\n",bakiye);
	    printf("Havale etmek istediginiz tutari giriniz=");
	    scanf("%d",&tutar);
	    if(tutar>1000)
		{
	    printf("Yetersiz miktar girdiniz!\nYeniden giriniz=");
	    scanf("%d",&tutar);
	    }
	    bakiye=bakiye-tutar;
	    printf("Yeni Bakiyeniz=%d",bakiye);
	}
	else if(islem==4)
	{
	    printf("Bakiyeniz=%d\n",bakiye);
	}
	else if(islem==5)
	{
	    printf("Kartinizi almayi unutmayin!");
	}		
}

