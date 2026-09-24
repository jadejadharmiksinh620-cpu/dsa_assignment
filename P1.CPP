#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push(int val,int *top,int s[])
{
	if(*top==4)
	{
		printf("Stack is Overflow ");
	}
	else
	{
		(*top)++;
		s[*top]=val;
		printf("%d Is Inserted into the stack :",s[*top]);
	}
}
void pop(int *top,int s[])
{
	int temp;
	if(*top==-1)
	{
		printf("Stack is Underflow :");
	}
	else
	{
		temp=s[*top];
		printf("%d is Poped from the Stack :",temp);
		(*top)--;
	}
}
void peek(int *top,int s[])
{
	if(*top==-1)
	{
		printf("stack is Empty :");
	}
	else
	{
		printf("%d Is On top Stack",s[*top]);
	}

}
void display(int *top,int s[])
{
	int i;
	if(*top==-1)
	{
		printf("Stack is Empty ");
	}
	else
	{
		for(i=*top;i>=0;i--)
		{
			printf("\n%d",s[i]);
		}
	}
}
void modify(int *top,int s[])
{
	int n1,n2,i,temp;
	if(*top==-1)
	{
		printf("Stack is Empty !!");
	}
	else
	{
		printf("Enter Value You Want to Modify :");
		scanf("%d",&n1);
		printf("Enter VAlue For Modify :");
		scanf("%d",&n2);
		for(i=0;i<5;i++)
		{
			if(s[i]==n1)
			{
				s[i]=n2;
			}
		}
		printf("%d is Modify Succesfully ",n2);
	}
}
void main()
{
	clrscr();
	int ch,val,s[5],top=-1;
	while(1)
	{
		printf("\n1.Push\n2.pop\n3.peek\n4.Modify\n5.Display\n6.Exit :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter The Number You Want to Insert :");
				scanf("%d",&val);
				push(val,&top,s);
				break;
			case 2:
				pop(&top,s);
				break;
			case 3:
				peek(&top,s);
				break;
			case 4:
				modify(&top,s);
				break;
			case 5:
				display(&top,s);
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("Enter The Valid Choice !!");
				break;
		}
	}

}

