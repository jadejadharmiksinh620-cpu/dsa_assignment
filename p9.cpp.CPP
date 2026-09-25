#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertbegin(int val)
{
    struct node *nd=(struct node *)malloc(sizeof (struct node));
    nd->data=val;
    nd->next=head;
    head=nd;
    cout<<head->data<< " Is Inserted Successfully";
}
void display()
{
	if(head==NULL)
	{
	    cout<<"\nList Is Empty :";
	}
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
	cout<<temp->data<<"->";
	temp=temp->next;
    }
}
void insertlast(int val)
{
    struct node *nd=(struct node *)malloc(sizeof(struct node));
    nd->data=val;
    nd->next=NULL;
    if(head==NULL)
    {
	head=nd;
    }
    else
    {
	struct node *temp;
	temp=head;
	while(temp->next!=NULL)
	{
	    temp=temp->next;
	}
	temp->next=nd;
	cout<<nd->data<<" is Inserted";
    }


}
void insertbetween(int num1,int num2,int val)
{
    if(head==NULL)
    {
	cout<<"List Is Empty :";
    }
    else{
	struct node *nd,*t1,*t2;
	nd=(struct node *)malloc(sizeof(struct node));
	nd->data=val;
	t1=head;
	t2=head->next;
	while(t2!=NULL&&(t1->data!=num1&&t2->data!=num2))
	{
		t1=t1->next;
		t2=t2->next;
	}
	if(t1->data==num1&&t2->data==num2)
	{
	    t1->next=nd;
	    nd->next=t2;
	    cout<<"\nData is Successfully Inserted ";
	}
	else{
	    cout<<"Enter Valid choice :";
	}
    }
}
void deletebegin()
{
    if(head==NULL)
    {
	cout<<"\nList is empty";
    }
    else
    {
	    struct node *temp;
	    temp=head;
	    head=head->next;
	    cout<<temp->data<<" is Deleted from the list";
	    free(temp);
    }
}
void deletelast()
{
    if(head==NULL)
    {
	cout<<"\n List is aready Empty !!";

    }
    else
    {
	if(head->next==NULL)
	{
	    cout<<head->data<< " is Deleted from tye list";
	    head=NULL;
	    free(head);
	}
	else{
	    struct node *temp,*tnext;
	    temp=head;
	    while(temp->next->next!=NULL)
	    {
		temp=temp->next;
	    }
	    tnext=temp->next;
	    if(tnext->next==NULL)
	    {
		temp->next=NULL;
		cout<<tnext->data<<" is Deleted from the end ";
		free(tnext);
	    }
	}
    }
}
int main()
{
	int choice,val,num1,num2;
	while(1)
	{
	    cout<<"\n1.Insertbegin\n2.Insertlast\n3.InsertBetween\n4.DelteBEgin\n5.Delete from Last\n6.Display\n7.Exit :";
	    cout<<"\nEnter Your Choice :";
	    cin>>choice;

	    switch(choice)
	    {
		case 1:
		    cout<<"Enter Value For Insertion :";
		    cin>>val;
		    insertbegin(val);
		    break;
		case 2:
		    cout<<"Enter Value for Insrtion :";
		    cin>>val;
		    insertlast(val);
		    break;
		case 3:
		    cout<<"\n Enter Both Value In Between You Want to Insert : ";
		    cin>>num1;
		    cin>>num2;
		    cout<<"Enter The VAlue For Insertion : ";
		    cin>>val;
		    insertbetween(num1,num2,val);
		    break;
		case 4:
		    deletebegin();
		    break;
		case 5:
		    deletelast();
		    break;
		case 6:
		    display();
		    break;
		case 7:
		    exit(0);
		    break;
		default:
		    cout<<"Enter Valid Choice:";
		    break;
	    }
        }

}