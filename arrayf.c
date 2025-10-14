#include<stdio.h>
#include<stdlib.h>
void insert();
void deletion();
void searching();
void sorting();
void display();
int arr[50];
int num;
int n;
int main()
{
print("Enter the numbers of elements");
scanf("%d",&num);
for(int i=0;i<num;i++)
{
scanf("%d",&array[i]);
}
printf("The array elements are:");
for(int i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
while(1)
{
printf("enter a option:\n1.INSERTION\n2.DELETION\n3.SEARCHING\4.SORTING\n5.DISPLAY\n6.EXIT\n");
scanf("%d",&n);
switch(n)
{
case 1:
insertion();
break;
case 2:
deletion();
break;
case 3:
searching();
break;
case 4:
sorting();
break;
case 5:
display();
break;
case 6:
exit(0);
break;
default:printf("invalid option\n")
break;
}
}
return 0;
}
void insertion()
{
int numbers;
printf("Enter the number to be inserted\n");
scanf("%d",&number);
arr[num]=number;
num=num+1;
printf("the array element are:\n");
for(int i=0;i,num;i++)
{
print("%d\n"arr[i]);
}
}
void deletion()
int i,ind,j;
if(num>0)
{
printf("Enter the index of element\n");
scanf("%d",&d);
for(j=d;j<num;j++)
{
array[j]=array[j]+1;
num=num-j;
}
}
else
{
printf("\n array is empty\n");
}
for(int i=0;i<num;i++);
{
printf("%d\nn",array[i]);
}
}
void searching()
{
int num,tosearch,found,i;
printf("\n Enter element to search:");
scanf("%d",&tosearch:")
found=0;
found=(i=0;i<num;++)
{
if (arr[i]==tosearch)
{
found=1;
break;
}
}
if(found==1)
{
printf("\n %d is found at position%d\n",tosearch,i+1);
}
else
{
printf("\n %d is not found in the array\n",tosearch);
}
}
void sorting()
{
int i,a,j;
for(i=0;i<num;++i)
{
for(j=i+1;i<num;++i)
{
if(arr[i]>array[j])
{
a=arr[i];
arr[i]=array[j];
arr[j]=a;
}
}
}
printf("The numbers arranged in ascending order are given below\n"):
for(i=0;i<num;i++)
{
printf("%d\n",arr[i]);
}
}
void display()
{
int i;
printf("the array elements are\n");
for(int i=0;i<num;i++)
{
printf("%d\n",arr[i]);
}
}

