//rename command....
//avinash trivedi...25/8/2012...
#include <stdio.h>
int main(int argc,char *argv[])
{
    int rename_file;
  rename_file=rename(argv[1], argv[2]);
  if (rename_file==0)
  printf("%s renamed to %s\n",argv[1],argv[2]);
  else
  puts("Error in renaming file\n");
}
