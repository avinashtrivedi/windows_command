//copy-paste command for (text file) only.......
//27/8/2012 avinash trivedi....
#include<stdio.h>
void main(int argc,char *argv[])
{
    FILE *fp,*ft;
    char s[1000];
    fp=fopen(argv[1],"r");
    ft=fopen(argv[2],"w");
    if(fp==NULL || ft==NULL) puts("(unable to do so)");
    while(fgets(s,1000,fp)!=NULL)
    {
        fputs(s,ft);
        //fputs("\n",ft);
    }
    puts("(duplicated successfully)");
fclose(fp);
fclose(ft);
}
