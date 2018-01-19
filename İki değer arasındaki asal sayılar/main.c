#include<stdio.h>
//GÝRÝLEN ÝKÝ SAYI ARASINDAKÝ ASAL SAYILAR
int asal(int num);
int main(){
   int n1,n2,i,k;
   printf("Iki sayi giriniz(aralik)\nbirinci sayi:  ");
   scanf("%d",&n1);
   printf("ikinci sayi: ");
   scanf("%d",&n2);
   printf("girilen iki sayi arasndaki asal sayilar: ");
   for(i=n1+1;i<n2;++i)
   {
      k=asal(i);
      if(k==0)
         printf("%d ",i);
   }
   return 0;
}
int asal(int num) 
{
   int j,k=0;
   for(j=2;j<=num/2;++j){
        if(num%j==0){
            k=1;
            break;
        }
   }
   return k;
}
