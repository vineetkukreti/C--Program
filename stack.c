#include<stdio.h>
#define max 4
int top = -1;
int push(int stack[],int n)
{
	if(top==max-1)
	{
		printf("stack is full..");
		return 0;
	}
	else
	{
		top++;
		stack[top] = n;
		return top;
	}
}
void display(int stack[])
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
}
int pop(int stack[])
{  
	if(top==-1)
	{
		printf("stack is empty");
	}

		printf("Deleted element = %d\n",stack[top]);
		top--;
        return top;	
}
int main()
{
	int n,i,m;
	int stack[max];
	printf("Enter no of element = ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{   printf("Enter the element = ");
		scanf("%d",&n);
		top = push(stack,n);
	}
	
	display(stack);
	top = pop(stack);
	display(stack);
}


