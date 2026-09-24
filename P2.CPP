#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void push1(int *top1,int *top2,int val,int a[])
{
    if((*top1)==(*top2)-1)
    {
	cout<<"Stack is Overflow:";
    }
    else{
	(*top1)++;
	a[*top1]=val;
	cout<<"Value pushed in stack 1:"<<val;
    }
}
void display1(int *top1,int a[])
{
    if(*top1==-1)
    {
	cout<<"Stack is Empty";
    }
    else{
	for(int i=*top1;i>=0;i--)
	{
	    cout<<"\n"<<a[i];
	}
    }
}
void push2(int *top2,int *top1,int val,int a[])
{
    if((*top1)==(*top2-1))
    {
	cout<<"Stack is overflow";
    }
    else
    {
	(*top2)--;
	a[*top2]=val;
	cout<<"Value is pushed into the stack"<<val;
    }
}
void pop2(int *top2,int a[])
{
    if(*top2==6)
    {
	cout<<"Stack2 is Underflow";
    }
    else
    {
	cout<<a[*top2]<<" is Poped from the stack2";
	(*top2)++;
    }
}
void display2(int *top2,int a[])
{
    if(*top2==6)
    {
	cout<<"stack2 is Empty";
    }
    else{
	for(int i=(*top2);i<6;i++)
	{
	    cout<<"\n"<<a[i];
	}
    }
}
void pop1(int *top1,int a[])
{
	if(*top1==-1)
	{
	    cout<<"Stack is Underflow";
	}
	else
	{
	    cout<<a[*top1]<<" is poped  from stack1" ;
	    (*top1)--;
	}
}
void peek1(int *top1,int a[])
{
    if(*top1==-1)
    {
	cout<<"Nothing in the stack";
    }
    else{
	cout<<a[*top1]<<" On top in stack1";
    }
}
void peek2(int *top2,int a[])
{
    if(*top2==6)
    {
	cout<<"Nothing in stack 2";
    }
    else{
	cout<<a[*top2]<<" Is On top in stack2";
    }
}
void alldisplay(int *top1,int *top2,int a[])
{
    if(*top2==6)
    {

    }
    else{
	for(int i=(*top2);i<6;i++)
	{
	    cout<<"\n"<<a[i];
	}
    }
	if(*top1==-1)
    {

    }
    else{
	for(int i=*top1;i>=0;i--)
	{
	    cout<<"\n"<<a[i];
	}
    }
}
int main()
{
    int top1=-1,top2=6,a[6],choice,val;
    while(1)
    {
	cout<<"\n======================================================\n1.push1\n2.push2\n3.pop1\n4.pop2\n5.peek1\n6.peek2\n7.display1\n8.display\n9.display all\n10.exit\n==================================================================";
	cout<<"\n\nEnter Your Choice:";
	cin>>choice;

	switch(choice)
	{
	    case 1:
		    cout<<"\nEnter Value You Want to Inserted:";
		    cin>>val;
		    push1(&top1,&top2,val,a);
		    break;
	    case 2:
		    cout<<"\nEnter Value you want to insert into stack";
		    cin>>val;
		    push2(&top2,&top1,val,a);
		    break;
	    case 3:
		    pop1(&top1,a);
		    break;
	    case 4:
		    pop2(&top2,a);
		    break;
	    case 5:
		    peek1(&top1,a);
		    break;
	    case 6:
		    peek2(&top2,a);
		    break;
	    case 7:
		    display1(&top1,a);
		    break;
	    case 8:
		    display2(&top2,a);
		    break;
	    case 9:
		    alldisplay(&top1,&top2,a);
		    break;
	    case 10:
		    exit(0);
		    break;
	    default:
	       cout<<"Enter Valid Choice:";
	       break;
	}
    }
}
