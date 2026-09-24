#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void insert(int *f,int *r,int a[],int val)
{
    if(*r==4)
    {
	cout<<"\nQueue is overflow";
    }
    else
    {
	(*r)++;
	a[*r]=val;
	cout<<a[*r]<<" is INserted into queue";
	if((*r)==0)
	{
	    *f=0;
	}

    }
}
void modify(int *r,int a[])
{
	int n1,n2,i;
	if(*r==-1)
	{
		cout<<" Queue is Empty :";
	}
	else
	{
		cout<<"Enter Number You Want to modify:";
		cin>>n1;
		cout<<"enter number for Update:";
		cin>>n2;
		for(i=0;i<5;i++)
		{
			if(a[i]==n1)
			{
				a[i]=n2;
				cout<<"Data modify Succesfully :";
			}
			else
			{
				cout<<"number is Not Found ";
			}

		}

	}
}
void display(int *f,int *r,int a[])
{
    if(*r==-1)
    {
	cout<<"Queue is Empty";
    }
    else
    {
	    int i;
	for(i=*f;i<=*r;i++)
	{
	    cout<<"\n"<<a[i];
	}
    }
}
void del(int *f, int *r,int a[])
{
    if(*r==-1)
    {
	cout<<"Queue is Underflow";
    }
    else
    {
	    cout<<a[*f]<<" i deleted from the queue";
	    (*f)++;
	    if(*f>*r)
	    {
		*f=-1;
		*r=-1;
	    }
    }
}
int main()
{
    int f=-1,r=-1,a[5],choice,val;
    clrscr();
    while(1)
    {
	cout<<"\n1.insert\n2.delete\n3.Modify\n4.display\n5.exit";
	cout<<"\nEnter Your Choice :";
	cin>>choice;

	switch(choice)
	{
	    case 1:
		    cout<<"\n\nEnter Value You Want to Insert:";
		    cin>>val;
		    insert(&f,&r,a,val);
		    break;
	    case 2:
		    del(&f,&r,a);
		    break;
	    case 3:
		    modify(&r,a);
		    break;
	    case 4:
		    display(&f,&r,a);
		    break;
	    case 5:
		    exit(0);
		    break;
	    default:
		    cout<<"Enter valds choice";
		    break;
	}
    }

}
