#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void insert(int *rear1,int *front1,int *rear2,int *front2,int val,int q[])
{
    int opt;
     cout<<"\nEnter in Which Queue you want to inserted a value:";
     cin>>opt;

    if(opt==1)
    {
	if(*rear1==*rear2-1)
	{
	    cout<<"Queue1 is Overflow";
	}
	else{
	    (*rear1)++;
	    q[*rear1]=val;
	    cout<<val<<" Is Inserted into queue";
	    if(*rear1==0)
	    {
		*front1=0;
	    }
	}
    }

    else if(opt==2)
    {
	if(*rear2==*rear1+1)
	{
	    cout<<"Queue2  is overflow";
	}
	else{
	    (*rear2)--;
	    q[*rear2]=val;
	    cout<<val<<" IS Inserted into queue2";
	    if(*rear2==5)
	    {
		(*front2)--;
	    }

	}
    }
    else{
	cout<<"Enter VAlid Choice";
    }

}
void display(int *rear1,int *front1,int *rear2,int *front2,int q[])
{
    int opt;
    cout<<"\nEnter WHich Queue you want to DIsplay:";
    cin>>opt;
    if(opt==1)
    {
	if(*front1==-1)
	{
	    cout<<"Queue 1 is Empty";
	}
	else{
	    for(int i=*front1;i<=(*rear1);i++)
	    {
		cout<<"\n"<<q[i];
	    }
	}
    }
    else if(opt==2)
    {
	if(*front2==6)
	{
	    cout<<"Queue 2 Is Empty";
	}
	else{
	    for(int i=*front2;i>=(*rear2);i--)
	    {
		cout<<"\n"<<q[i];
	    }
	}
    }
    else{
	cout<<"Enter Only 1 or 2";
    }
}
void del(int *rear1,int *front1,int *rear2,int *front2,int q[])
{
    int opt;
    cout<<"Enter it which queue you want to delete the element :";
    cin>>opt;
    if(opt==1)
    {
	if(*front1==-1)
	{
	    cout<<"Queue is Underflow";
	}
	else
	{
		cout<<q[*front1]<<" deleted fro, the queue";
		(*front1)++;
		if((*front1)>(*rear1))
		{
		    *front1=-1;
		    *rear1=-1;
		}
	}
    }
    else if(opt==2){
	if(*front2==6)
	{
	    cout<<"Queue is underflow";

	}
	else{
		(*front2)--;
		cout<<q[*front2]<<" deleted from the queue 2";
		if(*front2<*rear2)
		{
		    *front2=6;
		    *rear2=6;
		}

	}
    }
}
void modify(int *front1,int *front2,int q[])
{
    int opt,n1,n2,i;
    cout<<"\nEnter WHich Queue you want to DIsplay:";
    cin>>opt;
    if(opt==1)
    {
	if(*front1==-1)
	{
	    cout<<"Queue 1 is Empty";
	}
	else
	{
		cout<<"Enter Which VAalue You Want to Modify :";
		cin>>n1;
		cout<<"Enter VAlue for MOdify :";
		cin>>n2;
		for(i=0;i<3;i++)
		{
			if(q[i]==n1)
			{
				q[i]=n2;
				cout<<"Modify Successfully :";
			}
			else
			{
				cout<<"Value Not FOund :";
			}
		}

	}
    }
    else if(opt==2)
    {
	if(*front2==6)
	{
	    cout<<"Queue 2 Is Empty";
	}
	else
	{
		cout<<"Enter Value Which Value You WAnt to Modify :";
		cin>>n1;
		cout<<"Enter VAlue You WAnt to Modify :";
		cin>>n2;
	    for(int i=3;i<6;i++)
	    {

		if(q[i]==n1)
		{
			q[i]=n2;
			cout<<"Data MOdified Successfully";
		}
	    }
	}
    }
    else
    {
	cout<<"Enter Only 1 or 2";
    }
}

int main()
{

    int rear1=-1,front1=-1,rear2=6,front2=6,choice,val,q[6];
    while(1)
    {
	cout<<"\n1.Insert\n2.Delete\n3.Modify\n4.Display\n5.exit";
	 cout<<"\nEnter Your choice";
	cin>>choice;

	switch(choice)
	{
	    case 1:

		    cout<<"Enter Value You Want TO inserted:";
		    cin>>val;
		    insert(&rear1,&front1,&rear2,&front2,val,q);
		    break;

	    case 2:
		    del(&rear1,&front1,&rear2,&front2,q);
		    break;

	    case 3:
		    modify(&front1,&front2,q);
		    break;

	    case 4:
		    display(&rear1,&front1,&rear2,&front2,q);
		    break;
	    case 5:
		exit(0);
		break;
	    default:
		    cout<<"Enter Valid choice";
		    break;
	}
    }


}