//take input as C program and give its output.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
FILE *fp;
fp=fopen(argv[1],"w");
char s[2000];
while(1)
{
   gets(s);
   if(strcmp(s,":s")==0)break;
   fputs(s,fp);
   fputs("\n",fp);
}
fclose(fp);
sprintf(s,"d:\\tcc\\tcc -run %s", argv[1]);
system(s);
}
