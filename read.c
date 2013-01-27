//read from text file ....command...
//25/8/2012,avinash trivedi...
#include<stdio.h>
void main(int argc,char *argv[])
{
    FILE *fp;
    fp=fopen(argv[1],"r");
    if(fp==NULL)puts("unable to read");
    char s[2000];
    while(fgets(s,2000,fp)!=NULL)
    {
        printf("%s",s);
    }
    fclose(fp);
}
