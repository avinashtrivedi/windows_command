
#include<stdio.h>
#include<dos.h>
#include<process.h>
void main()
{
   struct  time t;
   struct dostime_t reset;
  gettime(&t);
   printf("The current time is: %d:%d:%d\n",t.ti_hour, t.ti_min, t.ti_sec, t.ti_hund);
  printf("enter new time in hh mm ss:");
  reset.hour=25;
  scanf("%[^\n]d%d%d",&reset.hour,&reset.minute,&reset.second);
  reset.hsecond = 0;
   if(reset.hour!=25)
    {
       _dos_settime(&reset);
    }
}
