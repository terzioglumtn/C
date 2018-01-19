/*  VERÝLEN BÝR TARÝHÝN YILIN KAÇINCI GÜNÜ OLDUÐUNU OLDUÐUNU HESAPLAR */
#include <stdio.h>

int yilin_gunu(int, int, int);
int artik_yil(int);

int main()
{
  int gun,ay,yil;    
  puts("Yilin kacinci gunu oldugunu bulmak icin tarihi giriniz.");
  printf("Yil :");
  scanf("%d",&yil);
  
  printf("Ay :");
  scanf("%d",&ay);
  
  printf("Gun :");
  scanf("%d",&gun);
  
  printf("%02d %02d  %d yilinin\n",gun,ay,yil );
  printf("%d. gunudur\n",yilin_gunu(gun,ay,yil) );

  return 0;
}

int artik_yil(int yil)
{
   if( yil%4==0) return 1;
   else return 0;
}

int yilin_gunu(int gun, int ay, int yil)
{
   int ygun = gun;

   switch(ay-1)
   {
     case 12: ygun += 31;
     case 11: ygun += 30;
     case 10: ygun += 31;
     case  9: ygun += 30;
     case  8: ygun += 31;
     case  7: ygun += 31;
     case  6: ygun += 30;
     case  5: ygun += 31;
     case  4: ygun += 30;
     case  3: ygun += 31;
     case  2: ygun += 28 + artik_yil(yil);  
     case  1: ygun += 31;
   }

  return ygun;
}
