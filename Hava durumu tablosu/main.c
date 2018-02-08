#include <stdio.h>
#include <stdlib.h>
int print_month(char a[15],int n);
void print_day(char a[15]);
int calculate_average(int d, int n,int* heat);
int main(int argc, char *argv[]) {
	
	int i,m,d,heat[31],sum=0,k,n=0,w=1,minday,maxday,mxd,mnd;
	int column;
	int day;
	int line;
	int count;
	int weekCount;
	int weekShifted;
	int *h=&heat[0];
	float avg=0.0;
	
	
	
	printf("1-JANUARY    2-FEBRUARY    3-MARCH       4-APRIL      5-MAY        6-JUNE \n7-JULY       8-AUGUST      9-SEPTEMBER   10-OCTOBER   11-NOVEMBER  12-DECEMBER \n\n\n");

	printf("Choose a month:");
	scanf("%d",&m);
	switch(m){
		case 1:
	    n = print_month("JANUARY",31);
		break;
		case 2:	
		n = print_month("FEBRUARY",28);
		break;
		case 3:
		n = print_month("MARCH",31);
		break;
		case 4:
		n = print_month("APRIL",30);
		break;
		case 5:
		n = print_month("MAY",31);
		break;
		case 6:
		n = print_month("JUNE",30);
		break;
		case 7:
	    n = print_month("JULY",31);
		break;
		case 8:
		n = print_month("AUGUST",31);
		break;
		case 9:
		n = print_month("SEPTEMBER",30);
		break;
		case 10:
		n = print_month("OCTOBER",31);
		break;
		case 11:
		n = print_month("NOVEMBER",30);
		break;
		case 12:
		n = print_month("DECEMBER",31);
		break;
	}

	printf("\n\n1-MONDAY  2-TUESDAY  3-WEDNESDAY  4-THURSDAY  5-FRIDAY  6-SATURDAY  7-SUNDAY\n\nEnter initial day for selected month:");
	scanf("%d",&d);
	if(d==1){
     	print_day("MONDAY");
	}
	else if(d==2){
		print_day("TUESDAY");
	}
	else if(d==3){
		print_day("WEDNESDAY");
	}
	else if(d==4){
		print_day("THURSDAY");
	}
	else if(d==5){
	    print_day("FRIDAY");
	}
	else if(d==6){
		print_day("SATURDAY");
	}
	if(d==7){
		print_day("SUNDAY");
	}
	
	printf("\n\n\n");
	for(k=0;k<n;k++){
		printf("%d. DAY TEMPERATURE=",k+1);
		scanf("%d",&heat[k]);
		}
		for(k=0;k<n;k++){
			sum=sum+heat[k];
		}
		avg=(float)sum/n;
		
		
	printf("\n\nWEEK\tMON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
	
	column = 0;
	line = 0;
	weekCount = 1;
	weekShifted = 0;

	for ( day = 0 ; day < n ;  )
	{
		if ( column == 0 )
		{
			printf( "%d\t" , weekCount );
			weekCount++;
			column++;
		}

		if ( weekShifted == 0 )
		{
			count = 1;
			while ( count < d )
			{
				printf( "\t" );
				
				count++;
				column++;                                                                                  
			}
			
			weekShifted = 1;
		}
		
		if ( column != 0 )
		{
			printf( "%d\t" , heat[ day ] );
			day++;
		}
		
		column++;

		if ( column == 8 )
		{
			printf( "\n\n" );
			
			column = 0;
			
			line++;
		}
		
			
	}
	maxday=heat[0],minday=heat[0];
	for(i=0;i<n;i++){
		if(heat[i]>maxday){
			maxday=heat[i];
			mxd=i+1;
		}
		
		if(heat[i]<minday)
		{
			minday=heat[i];
			mnd=i+1;
		}
		
	}
	
	printf("\n\n\n***************WARMEST--COLDEST********************\n\n");
	printf("\nWARMEST day=%d.Day: %dC",mxd,maxday);
	printf("\n********************************");
	printf("\nCOLDEST day=%d.Day: %dC",mnd,minday);
	printf("\n********************************");
	calculate_average(d-1,n,h);
	printf("\nMONTH Average: %.2fC\n",avg);	
}

int print_month(char a[15],int n)
{
	printf("Selected the month of %s.",a);
	return n;
}
void print_day(char a[15])
{
	printf("Initial day %s.",a);
}

int calculate_average(int d, int n, int* heat)
{
	int b = 0,f=0,y=1,p,array[7],t,i,j;
	int max, min, maxweek, minweek;
	float a=0.0, add = 0.0;
	float average[7];
	for (t = d; t < 7; t++)
	{
		array[f] = *(heat + b);
		add += array[f];
		y++;
		b++;
	}
	average[f] = add / b;
	if ((d == 5 && n == 31) || (d == 6 && n >= 30))
	{
		for (i = 0; i < 4; i++)
		{
			f++;
			add = 0.0;
			for (j = 0; j < 7; j++)
			{
				heat[b] = *(heat + b);
				add += heat[b];
				y++;
				b++;
			}
			average[f] = add / 7.0;
		}	
		f++;
	}
	else 
	{
		for (i = 0; i < 3; i++)
		{
			f++;
			add = 0.0;
			for (j = 0; j < 7; j++)
			{
				heat[b] = *(heat + b);
				add += heat[b];
				y++;
				b++;
			}
			average[f] = add / 7.0;
		}
		f++;
	}
	
	p = n - y+1;
	
	add = 0.0;
	for (t = 0; t < p; t++)
	{
		heat[b] = *(heat + b);
		add += heat[b];
		b++;
	}
	average[f] = add / p;

	max = average[0],min=average[0];
	
	for (i = 0; i < f; i++)
	{
		if (average[i] > max)
		{
			max = average[i];
			maxweek = i + 1;
		}
		if(average[i]<min){
			min=average[i];
			minweek=i+1;
		}
	}

	if (maxweek == 1)
	{
		printf("\nWARMEST week = 1st week : %.2fC ",average[0]);
		printf("\n********************************");
	}
	if (maxweek == 2)
	{
		printf("\nWARMEST week = 2nd week : %.2fC ",average[1]);
		printf("\n********************************");
	}
	if (maxweek == 3)
	{
		printf("\nWARMEST week = 3rd week : %.2fC ",average[2]);
		printf("\n********************************");
	}
	if (maxweek == 4)
	{
		printf("\nWARMEST week = 4th week : %.2fC ",average[3]);
		printf("\n********************************");
	}
	if (maxweek == 5)
	{
		printf("\nWARMEST week = 5th week : %.2fC ",average[4]);
		printf("\n********************************");
	}
	if (maxweek == 6)
	{
		printf("\nWARMEST week = 6th week : %.2fC ",average[5]);
		printf("\n*********************************");
	}
	if (minweek == 1)
	{
		printf("\nCOLDEST week = 1st week :%.2fC ",average[0]);
		printf("\n********************************");
	}
	if (minweek == 2)
	{
		printf("\nCOLDEST week = 2nd week :%.2fC ",average[1]);
		printf("\n********************************");
	}
	if (minweek == 3)
	{
		printf("\nCOLDEST week = 3rd week :%.2fC ",average[2]);
		printf("\n********************************");
	}
	if (minweek == 4)
	{
		printf("\nCOLDEST week = 4th week :%.2fC ",average[3]);
		printf("\n********************************");
	}
	if (minweek == 5)
	{
		printf("\nCOLDEST week = 5th week :%.2fC ",average[4]);
		printf("\n********************************");
	}
	if (minweek == 6)
	{
		printf("\nCOLDEST week = 6th week :%.2fC ",average[5]);
		printf("\n********************************");
	}
}

