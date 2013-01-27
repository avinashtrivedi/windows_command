#include <stdio.h>
#include <dos.h>
void main(int count,char *argv[]){
   struct find_t q ;
   int a;
   if(count==1)
      argv[1]="*.*";
      a = _dos_findfirst(argv[1],1,&q);
      if(a==0){
         while (!a){
            printf(" %s\n", q.name);
            a = _dos_findnext(&q);
         }
      }
      else{
         printf("File not found");
      }
}
