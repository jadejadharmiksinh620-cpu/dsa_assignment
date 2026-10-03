#include <iostream>
using namespace std;

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

    // Count digits
    for(int i = 0; i < n; i++)
    {
        int digit = (a[i] / place) % 10;
        count[digit]++;
    }

    // Position
    for(int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    // Output array
    for(int i = n - 1; i >= 0; i--)
    {
        int digit = (a[i] / place) % 10;

        output[count[digit] - 1] = a[i];

        count[digit]--;
    }

    // Copy back
    for(int i = 0; i < n; i++)
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

int main()
{
    int a[5] = {170, 45, 75, 90, 802};

    radixSort(a, 5);

    cout << "Sorted array: ";

    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
