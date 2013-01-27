//display command is like ECHO in windows.....
//that print something on terminal..
//25/8/2012 avinash trivedi
#include<stdio.h>
void main(int argc,char *argv[])
{
    int i;
    for(i=1;i<argc;i++)
        printf("%s ",argv[i]);
    puts("\n");
}
