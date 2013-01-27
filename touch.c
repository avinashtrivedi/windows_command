//touch or copy-con command to create text file ...
//25/8/2012,avinash trivedi...
#include<stdio.h>
void main(int argc,char *argv[])
{
    FILE *fp;
    int i;
    for(i=1;i<argc;i++)
    fp=fopen(argv[i],"w");
    fclose(fp);
}
