#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *lptr;
	struct node *rptr;
};
struct node *root=NULL;
struct node* insert(struct node *root,int val)
{
	struct node *nd;
	if(root==NULL)
	{
		nd=(struct node *)malloc(sizeof(struct node));
		nd->data=val;
		nd->rptr=NULL;
		nd->lptr=NULL;

		return nd;
	}
	if(val < root->data)
	{
		root->lptr=insert(root->lptr,val);
	}
	else
	{
		root->rptr=insert(root->rptr,val);
	}
	return root;
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		preorder(root->lptr);
		preorder(root->rptr);
	}
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->lptr);
		cout<<root->data<<" ";
		inorder(root->rptr);
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->lptr);
		postorder(root->rptr);
		cout<<root->data<<" ";
	}
}
void main()
{
	int ch,val;
	clrscr();

	do
	{
		cout<<"\n1.Insert\n2.Preorder\n3.Inorder\n4.PostOrder\n5.Exit";
		cout<<"Enter Your Choice :";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter The Value :";
				cin>>val;
				root=insert(root,val);
				cout<<val<< " is Inserted Successfully ";
				break;
			case 2:
				preorder(root);
				break;
			case 3:
				inorder(root);
				break;
			case 4:
				postorder(root);
				break;
			case 5:
				break;
			default:
				cout<<"Enter The Valid Choice :";
				break;
		}
	}while(ch!=5);
}