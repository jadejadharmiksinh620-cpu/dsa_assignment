#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void insert(int q[], int p[], int *r)
{
    int value, priority;

    if (*r == 4)
    {
	cout << "\nQueue is Full";
	return;
    }

    (*r)++;

    cout << "\nEnter Process: ";
    cin >> value;

    cout << "Enter Priority: ";
    cin >> priority;

    q[*r] = value;
    p[*r] = priority;

    cout << "\nProcess Inserted";
}

void deleteProcess(int q[], int p[], int *r)
{
    int i, pos, max;

    if (*r == -1)
    {
	cout << "\nQueue is Empty";
	return;
    }

    pos = 0;
    max = p[0];

    for (i = 1; i <= *r; i++)
    {
	if (p[i] > max)
	{
	    max = p[i];
	    pos = i;
	}
    }

    cout << "\nDeleted Process: " << q[pos];
    cout << "\nPriority: " << p[pos];


    for (i = pos; i < *r; i++)
    {
	q[i] = q[i + 1];
	p[i] = p[i + 1];
    }

    (*r)--;
}

void display(int q[], int p[], int *r)
{
    int i;

    if (*r == -1)
    {
	cout << "\nQueue is Empty";
	return;
    }

    cout << "\n\nProcess\tPriority";

    for (i = 0; i <= *r; i++)
    {
	cout << "\n" << q[i] << "\t" << p[i];
    }
}

int main()
{
    int q[5], p[5];
    int r = -1;
    int ch;

    while(1)
    {
	cout << "\n\n1. Insert";
	cout << "\n2. Delete";
	cout << "\n3. Display";
	cout << "\n4. Exit";

	cout << "\n\nEnter choice: ";
	cin >> ch;

	switch (ch)
	{
	    case 1:
		insert(q, p, &r);
		break;

	    case 2:
		deleteProcess(q, p, &r);
		break;

	    case 3:
		display(q, p, &r);
		break;

	    case 4:
		exit(0);
		break;

	    default:
		cout << "\nInvalid Choice";
	}

    }


}