#include <stdio.h>
#include <limits.h>

int array[10];

void input_array(int[], int);
void print_array(int[], int);
void quick_sort(int[], int, int);
int partition(int[], int, int);

void main()
{
    input_array(array, 5);
    quick_sort(array, 1, 5);
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

void quick_sort(int A[], int P, int R)
{
    int Q;

    if (P < R)
    {
        Q = partition(A, P, R);
        quick_sort(A, P, Q - 1);
        quick_sort(A, Q + 1, R);
    }
}

int partition(int A[], int P, int R)
{
    int x, i, j, temp;

    x = A[ R ];
    i = P - 1;

    for (j = P; j <= R - 1; j++)
    {
        if (A[ j ] <= x)
        {
            i++;
            temp = A[ i ];
            A[ i ] = A[ j ];
            A[ j ] = temp;
        }
    }

    temp = A[ i + 1 ];
    A[ i + 1 ] = A[ R ];
    A[ R ] = temp;
    
    return ( i + 1 );
}