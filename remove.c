//remove command to delete text file
//25/8/2012......avinash trivedi.
#include <stdio.h>
#include <conio.h>
void main(int argc,char *argv[])
{
  if (remove(argv[1]) ==0)
  printf("\"%s\" successfully removed\n",argv[1]);
  else puts("Error in deleting a file\n");
}
