#include <stdio.h>
#include <limits.h>

int array[10];

void input_array(int[], int);
void print_array(int[], int);
void merge_sort(int[], int, int);
void merge(int[], int, int, int);

void main()
{
    input_array(array, 5);
    merge_sort(array, 1, 5);
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

void merge_sort(int A[], int P, int R)
{
    int Q;

    if (P < R)
    {
        Q = (P + R) / 2;
        merge_sort(A, P, Q);
        merge_sort(A, Q + 1, R);
        merge(A, P, Q, R);
    }
}

void merge(int A[], int P, int Q, int R)
{
    int n1, n2, i, j, k;

    n1 = Q - P + 1;
    n2 = R - Q;

    int LEFT[n1 + 1], RIGHT[n2 + 1];

    for (i = 1; i <= n1; i++)
        LEFT[i] = A[P + i - 1];

    for (j = 1; j <= n1; j++)
        RIGHT[j] = A[Q + j];

    LEFT[n1 + 1] = INT_MAX;
    RIGHT[n2 + 1] = INT_MAX;

    i = 1, j = 1;

    for (k = P; k <= R; k++)
    {
        if (LEFT[i] <= RIGHT[j])
        {
            A[k] = LEFT[i];
            i++;
        }
        else
        {
            A[k] = RIGHT[j];
            j++;
        }
    }
}