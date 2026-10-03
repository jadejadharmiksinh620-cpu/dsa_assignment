#include<iostream.h>
#include<conio.h>

void linearSearch(int a[], int n, int key)
{
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            cout << "\nLinear Search: Element found at position "
                 << i + 1;
            found = 1;
            break;
        }
    }

    if(found == 0)
        cout << "\nLinear Search: Element not found";
}

void binarySearch(int a[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid;
    int found = 0;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            cout << "\nBinary Search: Element found at position "
                 << mid + 1;
            found = 1;
            break;
        }
        else if(key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 0)
        cout << "\nBinary Search: Element not found";
}

void main()
{
    int a[10];
    int n, i, key;

    clrscr();

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements in sorted order: ";

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    linearSearch(a, n, key);

    binarySearch(a, n, key);

    getch();
}
