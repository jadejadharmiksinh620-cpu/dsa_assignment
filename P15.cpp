#include<iostream.h>
#include<conio.h>

int getMax(int a[], int n)
{
    int max = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    return max;
}

void countingSort(int a[], int n, int place)
{
    int output[10];
    int count[10] = {0};
    int i, digit;

    for(i = 0; i < n; i++)
    {
        digit = (a[i] / place) % 10;
        count[digit]++;
    }

    for(i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    for(i = n - 1; i >= 0; i--)
    {
        digit = (a[i] / place) % 10;

        output[count[digit] - 1] = a[i];

        count[digit]--;
    }

    for(i = 0; i < n; i++)
    {
        a[i] = output[i];
    }
}

void radixSort(int a[], int n)
{
    int max = getMax(a, n);

    for(int place = 1; max / place > 0; place = place * 10)
    {
        countingSort(a, n, place);
    }
}

void main()
{
    int a[5] = {170, 45, 75, 90, 802};
    int i;

    clrscr();

    radixSort(a, 5);

    cout << "Sorted Array: ";

    for(i = 0; i < 5; i++)
        cout << a[i] << " ";

    getch();
}
