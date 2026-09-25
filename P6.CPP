#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void insert(int *top,int *rear,int cq[],int val)
{
    if(*top==0 && *rear==4 || *rear+1==*top)
    {
	cout<<"Queue is Overflow--!";
    }
    else{
	if(*rear==-1 && *top==-1)
	{
	    *rear=0;
	    *top=0;
	}
	else if(*rear==4)
	{
	    *rear=0;
	}
	else{
	    (*rear)++;
	}
	cq[*rear]=val;
	cout<<cq[*rear]<<" Inserted Into Queue ";
    }
}
void display(int *top,int *rear,int cq[])
{
    if(*top==-1)
    {
	cout<<" Queue Is Empty --!";
    }
    else{
	int i=*top;
	while(1)
	{
	    cout<<"\n"<<cq[i];
	    if(i==*rear)
	    {
		break;
	    }
	    i =(i +1)%5;
	}
    }
}
void del(int *top,int *rear,int cq[])
{
    if(*top==-1)
    {
	cout<<"Queue is Underflow ";
    }
    else{
	 cout<<cq[*top]<<" Deleted from the Queue !!";
	if(*top==*rear)
	{
	    *top=-1;
	    *rear=-1;
	}
	else if(*top==4)
	{
	    *top=0;
	}
	else{
	    (*top)++;
	}
    }
}
void modify(int *top,int *rear,int cq[])
{
	if(*top==-1)
	{
		cout<<" Queue is Undeflow ";
	}
	else
	{
		int i=*top,n1,n2;
		cout<<"Enter Which VAlue You WAnt TO Modify From queue :";
		cin>>n1;
		cout<<"Enter value NEw Value :";
		cin>>n2;
		while(1)
		{
		    if(cq[i]==n1)
		    {
			cq[i]=n2;
			cout<<"Data Modify SUccessfully :";
		    }
		    if(i==*rear)
		    {
			break;
		    }
		    i =(i +1)%5;
		}
	}

}
int main()
{

    int top=-1,rear=-1,choice,val,cq[5];
    clrscr();
    while(1)
    {

	  cout<<"\n1.insert\n2.Delete\n3.Display\n4.Modify\n5.Exit:";
	 cout<<"Enter Yur Choice :";
	 cin>>choice;
	switch(choice)
	{
	    case 1:
		cout<<"\nEnter Value you want to inserted :";
		cin>>val;
		insert(&top,&rear,cq,val);
		break;
	    case 2:
		del(&top,&rear,cq);
		break;
	    case 3:
		display(&top,&rear,cq);
		break;
	    case 4:
		modify(&top,&rear,cq);
		break;
	    case 5:
		exit(0);
		break;
	    default:
		cout<<"Enter Valid Choice:";
		break;
	}
    }

}