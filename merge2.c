#include <stdio.h>

// Function declarations
void readarray(int[], int);
void printarray(int[], int);
void merge(int[], int[], int[], int, int);

int main()
{
    int ar1[20], ar2[20], ar3[40];
    int m, n;

    printf("Number of elements in 1st array [1-20]: ");
    scanf("%d", &m);
    printf("Enter elements in non-descending order:\n");
    readarray(ar1, m);

    printf("Number of elements in 2nd array [1-20]: ");
    scanf("%d", &n);
    printf("Enter elements in non-descending order:\n");
    readarray(ar2, n);

    merge(ar1, ar2, ar3, m, n);

    printf("Merged array:\n");
    printarray(ar3, m + n);

    return 0;
}

void readarray(int a[], int n)
{
    int i;
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
}

void printarray(int ar[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

void merge(int a[], int b[], int c[], int m, int n)
{
    int i = 0, j = 0, k = 0;

    // Merge arrays until one is exhausted
    while(i < m && j < n)
    {
        if(a[i] <= b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    // Copy remaining elements of a[], if any
    while(i < m)
    {
        c[k++] = a[i++];
    }

    // Copy remaining elements of b[], if any
    while(j < n)
    {
        c[k++] = b[j++];
    }
}

