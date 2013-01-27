//write in to text file ......command...
//25/8/2012,avinash trivedi...
#include<stdio.h>
void main(int argc,char *argv[])
{
    FILE *fp;
    fp=fopen(argv[1],"w");
    if(fp==NULL)puts("some problem exist");
    char s[2000];
    while(1)
    {
        gets(s);
        if(strcmp(s,":s")==0) break;
        fputs(s,fp);
        fputs("\n",fp);
    }
    fclose(fp);
}
