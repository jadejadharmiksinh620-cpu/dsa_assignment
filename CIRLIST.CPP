#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert(int val)
{
	struct node *nd,*temp;
	nd=(struct node *)malloc(sizeof(struct node));
	nd->data=val;
	nd->next=NULL;
	if(head==NULL)
	{
		head=nd;
		nd->next=head;
	}
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=nd;
		nd->next=head;

	}
}
void display()
{
	struct node *temp=head->next;
	if(head==NULL)
	{
		cout<<"List is Empty";
	}
	else
	{
		cout<<head->data<<" -> ";
		while(temp!=head)
		{
			cout<<temp->data<<" -> ";
			temp=temp->next;
		}
		cout<<" HEAD ";

	}

}
void dele(int val)
{
	if(head==NULL)
	{
		cout<<"list Is Empty :";
	}
	if(head->data==val)
	{
		free(head);
		head=NULL;
	}
	else
	{
		struct node *temp=head,*prev;
		while(temp->next->data!=val)
		{
			temp=temp->next;
		}
		prev=temp->next;
		if(temp->next->data==val)
		{
			temp->next=prev->next;
		}
	}
}
void modify()
{
	int old,n;
	struct node *temp=head->next;
	if(head==NULL)
	{
		cout<<" LIst is Empty ";
	}
	else
	{
		cout<<"Enter Old Value:";
		cin>>old;
		cout<<"Enter New Value :";
		cin>>n;
		if(head->data==old)
		{
			head->data=n;
		}
		else
		{
			while(temp!=head)
			{
				if(temp->data==old)
				{
					temp->data=n;
				}
				else
				{
					temp=temp->next;
				}
			}

		}
	}
}
void main()
{
	int ch,val;
	clrscr();

	while(1)
	{
	cout<<"\n1.Insret\n2.Delete\n3.Update\n4.Display\n5.Exit";
	cout<<"\nEnter your choice :";
	cin>>ch;

		switch(ch)
		{
			case 1:
				cout<<"Enter VAlue For Insertion :";
				cin>>val;
				insert(val);
				break;
			case 2:
				cout<<"Enter Value For Deletion :";
				cin>>val;
				dele(val);
				break;
			case 3:
				modify();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
				break;

			default:
				cout<<"Enter Valid Choice ";
				break;
		}
	}
}
