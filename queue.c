#include<stdio.h>
struct queue
{
    int element[10];
    int front;
    int rear;
};
typedef struct queue QUEUE;
//QUEUE q;
void qinsert(QUEUE *q,int item)
{
    if(q->rear<9)
    {
        q->element[++q->rear]=item;
    }
    else printf("overflow\n");
}
int delete(QUEUE *q)
{
    if(q->rear > q->front)
    {
        int t =q->front;
        q->front++;
        return q->element[t];
    }
    else if(q->rear==q->front) {int k=q->front;q->front=0;q->rear=-1;return q->element[k]; }
    else{printf("underflow\n");return ;}
}
int main()
{
    QUEUE *q;
    q->front=0;
    q->rear=-1;
 printf("press 1 to insert:\n");
 printf("press 2 to delete:\n");
 while(1)
 {
     int n;
     scanf("%d",&n);
     if(n==1)
     {
         int item;
         scanf("%d",&item);
         qinsert(q,item);
     }
     else if(n==2)
     {
         printf("%d \n",delete(q));
     }
 }
}
