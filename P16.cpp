#include<iostream.h>
#include<conio.h>

void heapify(int a[], int n, int i)
{
    int largest;
    int left;
    int right;
    int temp;

    largest = i;

    left = 2 * i + 1;
    right = 2 * i + 2;

    if(left < n && a[left] > a[largest])
        largest = left;

    if(right < n && a[right] > a[largest])
        largest = right;

    if(largest != i)
    {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n)
{
    int i, temp;

    /* Max Heap banana */
    for(i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }

    /* Largest element ko last mein bhejna */
    for(i = n - 1; i > 0; i--)
    {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);
    }
}

void main()
{
    int a[5] = {4, 10, 3, 5, 1};
    int i;

    clrscr();

    heapSort(a, 5);

    cout << "Sorted Array: ";

    for(i = 0; i < 5; i++)
        cout << a[i] << " ";

    getch();
}
