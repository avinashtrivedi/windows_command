
#include <dos.h>
#include <stdio.h>
#include<conio.h>

void main()
{
   struct date d,reset;
   getdate(&d);
   printf("The current date is: %d/%d/%d\n",d.da_day,d.da_mon,d.da_year);
   printf("enter new date:");
   reset.da_day = 0;
   scanf("%[^\n]d %d %d",&reset.da_day,&reset.da_mon,&reset.da_year);
   if(reset.da_day!=0)
   {
	setdate(&reset);
	printf("The current date is: %d/%d/%d\n",d.da_day,d.da_mon,d.da_year);
   }

}




