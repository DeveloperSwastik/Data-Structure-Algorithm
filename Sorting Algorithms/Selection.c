#include <stdio.h>

int array[10];

void input_array(int[], int);
void print_array(int[], int);
void selection_sort(int[], int);
int minimum(int[], int, int);

void main()
{
    input_array(array, 5);
    selection_sort(array, 5);
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
        printf("%d, ", A[i]);
    }
    printf("}");
}

void selection_sort(int A[], int N)
{
    int k;
    int loc;
    int temp;

    for (k = 1; k <= N - 1; k++)
    {
        loc = minimum(A, k, N);
        temp = A[k];
        A[k] = A[loc];
        A[loc] = temp;
    }
}

int minimum(int A[], int K, int N)
{
    int j;
    int min = A[K];
    int loc = K;

    for (j = K + 1; j <= N; j++)
    {
        if (min > A[j])
        {
            min = A[j];
            loc = j;
        }
    }

    return loc;
}