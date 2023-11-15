#include <stdio.h>

int array[10];

void input_array(int[], int);
void print_array(int[], int);
void insertion_sort(int[], int);

void main()
{
    input_array(array, 5);
    insertion_sort(array, 5);
    print_array(array, 5);
}

void input_array(int A[], int N)
{
    int i;

    printf("Enter the values for sorting :-\n");
    for (i = 1; i <= N; i++)
    {
        printf("Value %d :", i);
        scanf("%d", &A[i]);
    }
}

void print_array(int A[], int N)
{
    int i;

    printf("\nSorted array is : {");
    for (i = 1; i <= N; i++)
    {
        if (i != N)
            printf("%d, ", A[i]);
        else
            printf("%d}", A[i]);
    }
}

void insertion_sort(int A[], int N)
{
    int key, i, j;

    for (j = 1; j <= N; j++)
    {
        key = A[j];
        i = j - 1;

        while (i > 0 && A[i] > key)
        {
            A[i + 1] = A[i];
            i--;
        }

        A[i + 1] = key;
    }
}