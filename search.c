#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int q[SIZE];
int rear=0,front=0;
void insertion(int item)
{
int r1=rear;
r1=(r1+1)%SIZE;
if(r1==front)
printf("Queue is full");
else{
rear=r1;
q[rear]=item;
}
}
int deletq1(int*status)
{
if(front==rear){
*status=0;
printf("queue is empty\n");}
else
{
front=(front+1)%SIZE;
*status=1;
return q[front];
}
}
int searchq(int item)
{
if(front==rear)
{
return -1;
}
t=(front+1)%SIZE;
while(t!=(rear+1)% SIZE && q[t]!=item){
t=(t+1)%SIZE;
}
if(q(t)==item)
return t;
else 
return -1;
}
int main()
{
int item,opt,ans,status;
do
{
printf("\n1.insert\n");
printf("\n2.delete\n");
printf("\n3.search\n");
printf("\n4.exit\n");
printf("\n enter your option:\n");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("\n enter the data:");
scanf("%d",&item);
insertion(item);
break;
case 2:item=deletq1(&status);
if(status==1)
printf("Deleted:&d\n",item);
break;
case 3:printf("enter the number to serach:");
scanf("%d",&item);
ans=searchq(item);
if(ans==-1)
printf("not found\n");
printf("item found at %d position\n",ans);
break;
case 4:exit(0);
}
}
while(1);
}

