//stack command
//27/8/2012 avinash trivedi.
#include<stdio.h>
#include<string.h>
int max;
int top=-1;
int pop(int *);
void push(int *,int);
void print(int *);
void push(int *stack,int item)
{
	if(top==max-1)
	{
	 puts("(stack full)");
	}
	else
	{
	top++;
	 stack[top]=item;
	}
}
int pop(int *stack)
{
	int t;
	if(top==-1)
	{
	puts("(empty stack)"); return 0;
	}
	else
	{       t=stack[top];
		top--;
		return t;
	}
}

void print(int *stack)
{
int i;
for(i=0;i<=top;i++)
{
printf("%d ",stack[i]);
}
printf("\n");
}
int main(int argc,char*argv[])
{
char arr[7];
char s[atoi(argv[1])];
int t;
int a;
max=atoi(argv[1]);
printf("stack created %d\n",max);
while(1)
{
printf(">>");
scanf("%s",arr);
	if(strcmp(arr,"push")==0)
	{
		scanf("%d",&a);
		push(s,a);

	}
	else if(strcmp(arr,"print")==0)print(s);
	else if(strcmp(arr,"pop")==0)
	{
	    t=pop(s);
	    if(t!=0)printf("%d\n",t);
	}
	else if(strcmp(arr,"end")==0)break;
	else if(strcmp(arr,"top")==0)printf("%d\n",top);
	else if(strcmp(arr,"resize")==0) {scanf("%d",&max);printf("stack resized to %d\n",max);}
	else {}

}
return 1;
}








